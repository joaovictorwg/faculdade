Ransomware é um sequestro de informações, onde o atacante captura os dados da vitima, criptografa e libera a chave para descriptografar mediante a um pagamento de resgate

Engenharia social é um metodo de persuasão, que se baseia em manipular e abusar da ingenuidade da vitima para conseguir informações sensiveis e confideinciais da mesma

Exploit-zero-day são vulnerabilidades conhecidas apenas pelos hackers, sendo desconhecidas pelas empresas e pelos desenvolvedores, isso é o que torna essas vulnerabilidades tão perigosas

Exploits: codigos, intruções, scripts que tem como objetivo explorar determinadas vulnerabilidades em um programa

Trojan é um programa que se apresenta como util, mas que possui uma carga maliciosa, que normalmente é utilizada para explorar vulnerabilidades no sistema onde o trojan foi ativado

Spoofing é uma tecnica utilizada para disfarçar endereços eletronicos como endereço mac, numero de telefone, email, Ip. Tem como objetivo fazer o alvo acreditar que a informação vinda do atacante, é na verdade de um fonte segura

Algoritmo de hash é uma função matematica que uma saida de tamanho fixa, a partir de uma entrada de tamanho arbitrario.
    
Unidirecionalidade: deve ser impossivel deduzir o texto em claro a partir do texto cifrado

Difusão: pequenas mudanças no texto em claro geram grandes mudanças no texto cifrado

Resistencia a colisão: deve ser computacionalmente dificil que duas entradas diferentes resultem num mesmo hash

Como o TOR se baseia em cifragem multipla, com varias maquinas (nos) servindo como intermediarios entre a conexão, seria necessario que todas as maquinas estejam comprometidas no circuito associado a conexão

Não existe algoritmo melhor, simetrico e assimetrico são utilizados em conjunto, como o assimetrico exige elevado poder computacional, ele normalmente é utilizado apenas no inicio, para que ocorra a troca de chaves com segurança, após a troca de chaves, o algoritimo simetrico sera utilizado, pois ele é mais rapido e como o problema de falta de segurança de troca de chaves do simetrico foi resolvido pelo assimetrico, é o cenario ideal

Integridade garante que as informações permaneçam como estavam originalmente, não permitindo sua alteração por entidades não autenticadas

Disponibilidade é uma propriedade de resistencia a falhas, que busca garantir que um software, hardware, permaneça ativo pelo maximo de tempo possivel

Confidencialidade garante que apenas entidades devidamente autenticadas possam acessar as informações de um sistema

IDS é um sistema de detecção de intrusos, que identifica atividades suspeitas e informa ao administrador sobre a atividade maliciosa encontrada 

IPS tambem identifica e detecta atividades suspeitas e maliciosas, mas ao inves de avisar o admin, ele mesmo toma providencia, seja por meio de configurações de firewalls e PCs, como pelo encerramento de conexão via pacotes rest

Honey pots são maquinas ou sistemas desenvolvidos propositalmente com vulnerabilidades, para que hackers sejam atraidos e tentem invadir, dessa forma, é possivel monitorar e catalogar as atividades dos hackers

TTL(TIME TO LIVE): numero maximo de saltos que um pacotes pode dar ate chegar até chegar ao seu destino, o limite é de 255

Proxy é um servidor que atua como intermediario, fazendo as requisições no lugar do usuario, solicitando recursos de outros servidores

VPN constroi uma rede privada sobre uma rede de comunicação publica, servindo como um tunel criptografado que intermedia a conexão do cliente até a internet, mantendo o cliente seguro

Disserte acerca da terminologia das chaves:
Simetrica: na criptografia simetrica, a chave é chamada de chave secreta, essa chave secreta é utilizada tanto para criptogtafar quanto para descriptografar dados.
Assimetrica: Existem duas chaves, a chave publica e a privada, a publica é utilizada para criptografar e a privada para descriptografar. Funciona da seguinte forma: um user cria as duas chaves, e dsitribui a publica e quem quiser se comunicar com o usuario devera usar a chave publica par criptografar e enviar a criptografia ao usuario, que usara a chave privada para descriptografar e ler a mensagem

Escalonamento de privilegios consistem conseguir acesso a recursos e informações que são protegidos. Isso é feito por meio da exploração de vulnerabilidades ou deficiencias de um sistema, para obter privilegios superiores que possam acessar os conteudos protegidos;

 