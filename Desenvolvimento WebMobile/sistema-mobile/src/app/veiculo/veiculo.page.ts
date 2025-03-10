import { Component, OnInit } from '@angular/core';
import { CommonModule } from '@angular/common';
import { Veiculo } from './veiculo.model';
import { Usuario } from '../home/usuario.model';
import { HttpClient, HttpClientModule, HttpHeaders } from '@angular/common/http';
import { IonicModule, LoadingController, NavController, ToastController } from '@ionic/angular';
import { Storage } from '@ionic/storage-angular';

@Component({
  selector: 'app-veiculo',
  templateUrl: './veiculo.page.html',
  styleUrls: ['./veiculo.page.scss'],
  standalone: true,
  imports: [IonicModule, CommonModule, HttpClientModule],
  providers: [HttpClient, Storage]
})
export class VeiculoPage implements OnInit {

  public usuario: Usuario = new Usuario();
  public lista_veiculos: Veiculo[] = [];

  constructor(
    public http: HttpClient,
    public storage: Storage,
    public controle_toast: ToastController,
    public controle_navegacao: NavController,
    public controle_carregamento: LoadingController
  ) { }

  async ngOnInit() {

    //verifica se existe registro de configuração para
    await this.storage.create();
    const registro = await this.storage.get('usuario');

    if(registro){
      this.usuario = Object.assign(new Usuario(), registro);
      this.consultarVeiculosSistemaWeb();
    }
    else{
      this.controle_navegacao.navigateRoot('/home');
    }

  }

  async consultarVeiculosSistemaWeb(){
    //inicializar interface com efeito de carregamento
    const loading = await this.controle_carregamento.create({message: 'Pesquisando...', duration: 60000});
    await loading.present();

    let http_headers: HttpHeaders = new HttpHeaders({
        'Content-Type': 'application/json',
        'Authorization': `Token ${this.usuario.token}`
    });

    //requista lista de veiculos para a API do sistema 
    this.http.get(
      'http://127.0.0.1:8000/veiculo/api/',
      {
        headers: http_headers
      }
    ).subscribe({
      next: async (resposta: any) => {
        this.lista_veiculos = resposta;

        //finaliza interface com efeito de carregamento
        loading.dismiss();
      },
      error: async (erro: any) => {
        loading.dismiss();
        const mensagem = await this.controle_toast.create({
        message: `Falha ao consultar veículos: ${erro.message}`,
        cssClass: 'ion-text-center', 
        duration: 2000
      });
      mensagem.present();
      }
    })
  }
  async excluirVeiculo(id: number) {

    // Inicializa interface com efeito de carregamento
    const loading = await this.controle_carregamento.create({message: 'Autenticando...', duration: 30000});
    await loading.present();

    let http_headers: HttpHeaders = new HttpHeaders({
      'Content-Type': 'application/json',
      'Authorization':`Token ${this.usuario.token}`
    });

   
    this.http.delete(
      'http://127.0.0.1:8000/veiculo/api/${id}/',
      {
        headers: http_headers
      }
    ).subscribe({
      next: async (resposta: any) => {

        this.consultarVeiculosSistemaWeb();

        // Finaliza interface com efeito de carregamento
        loading.dismiss();
      },
      error: async (erro: any) => {
        loading.dismiss();
        const mensagem = await this.controle_toast.create({
          message: `Falha ao excluir o veículo: ${erro.message}`,
          cssClass: 'ion-text-center',
          duration: 2000
        });
        mensagem.present();
      }
    });
  }

}
