
---

### Portas
1. **O que são portas em um sistema operacional e qual a sua função?**
    Portas são pontos finais de comunicação dentro de um sistema operacionais, identificam processos e aplicações em um computador.

    Portas são pontos finais da comunicação dentro de um sistema operacional, identificam processos e aplicações em um computador

1. **Quais são os três tipos principais de portas e suas respectivas faixas numéricas?**
    Well-Known Ports: 1 - 1024. São portas reservadas para processos de sistema
    Portas Registradas 1024 - 50000(aproximadamente) Usadas por aplicações e serviços especificos
    Portas Dinâmicas e/ou privadas 50.000 - 65000 ~ Usadas temporariamente por clientes durante comunicação com servidor

    Portas bem conhecidas, 0 - 1024
    Portas Registradas - 49500
    Portas dinamicas privadas 65000
1. **Dê exemplos de portas bem conhecidas e os serviços associados a elas.**
    HTTP: 80
    HTTPS: 443
    FTP: 21
1. **Qual é a função das portas dinâmicas e privadas?**
    São portas utilizadas por clientes durante comunicação com servidor

### Ferramentas de Verificação de Portas
5. **Para que serve o comando `netstat` e como ele pode ser utilizado para verificar portas?**
    netstat pode ser utilizado para listar todas as conexões e escuta portas netstat -a

    netstat lista as conexoes e escutas portas
1. **Como o `netcat` pode ser utilizado para estabelecer comunicação entre máquinas? Dê um exemplo de uso.**
    Envia e recebe dados atraves de conexão tcp e udp
    envia e recebe dados atraves de udp e tcp

1. **Qual a finalidade do Nmap e como ele é utilizado para análise de rede?**
    nmap é um utilitario para descoberta de hosts e analise de rede
    
nmap par monitorar e analisar redes 
### IDS (Sistema de Detecção de Intrusões)
8. **O que é um IDS e qual é a diferença entre um IDS passivo e um IDS ativo?**
    IDS é um Sistema de Identificação de Intrusos, utilizado para monitorar redes em busca de atividades suspeitas. O passivo, ao encontrar atividade suspeita, comunica ao admin, ja o ativo, bloqueia o user com atividade suspeita ou toma alguma atitude para remediar a situação

    Sistema de identificação de intruso, utilizado para monitorar redes em busca de atividades suspeitas. Ativo bloqueia e toma atitudes automaticamente ao encontrar suspeitos, passiva avisa ao admin

1. **Quais são os dois tipos principais de IDS e o que cada um analisa?**
    Baseado em HOST: analisa ativiadades diretamente em um unico computador
    Baseado em rede: Analisa o trafego de rede em busca de atividades suspeitas

    Host: analisa a partir de um unico computador
    Rede: analisa o trafego de rede em busca de atividades suspeitas

1. **Dê um exemplo de um sistema IDS/IPS conhecido.**
    Snort: IDS Open source baseado em rede
    
### CVE
11. **O que é uma CVE e qual a sua importância para a segurança de sistemas?**
    Common Vulnerabilites Exposure. São base de dados publicas para troca de informações sobre vulnerabilidades e falhas de segurança. Importante para padronizar nomes e infos para todas as vulnerabilidades expostas publicamente    

    Common vulnerabilites exposure. São bancos de dados que armazenam vulnerabilidade publicas, com intutido de informar e padronizar

### Honeypots
12. **O que é um honeypot e qual o seu principal objetivo?**
    São sistema criados propositalmente com vulnerabilidades para atrair hackers, com intuito de monitorar suas atividades

1. **Como um honeypot pode ser configurado para parecer um sistema real?**
    Geralmente tem serviços comuns em portas bem conhecidas em execução, como http 80, com alguma vulnerabilidade

### Comandos Adicionais
14. **Qual é a função do `Netdiscover` e em que situação ele seria útil?**
    Listar dispositivos em uma rede local
---

