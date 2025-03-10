

1. **O que é criptografia e qual sua principal função?**
    Criptografia é o processo de esconder um informação usando uma chave para tornar seu conteudo ininteligivel. Sua principal função é esconder e proteger informações

1. **Explique o funcionamento da Cifra de César.**
    A cifra de cesar funciona basicamente trocando as letras do alfabeto por numero na seguinte sequencia A -> 3, B -> 4, C -> 5...

1. **Qual é a diferença entre 'texto em claro' e 'texto cifrado'?**
    Texto em claro é a informação antes de ser cifrada, é inteligivel e compreensivel. Ja o texto cifrado é a informação depois de ser escondida, idealmente não deveria ser inteligivel sem acesso a chave.

1. **O que é uma chave criptográfica e qual é a sua importância no processo de criptografia?**
    Uma chava criptografica é uma sequencia de bits utilizada em conjunto com um algoritmo de cifra, para criptografar um texto em claro.
    
    Chave criptografica é um conjunto de bits utilizada em algoritmos de cifra, para criptografar textos em claro

1. **Qual é o princípio de Kerckhoffs e por que ele é importante para a segurança dos sistemas criptográficos?**
    O principio de Kerckhoffs diz que a segurança de um criptosistema não deve se basear na manutenção do algoritmo, e sim em manter a chave em segredo.

    O principio de ... diz que a segurança de um criptosistema não deve depender da menunteção do algoritmo, e sim de manter a chave em segredo

6. **Qual é a definição de difusão em criptografia e qual o seu papel na segurança do texto cifrado?**
    A difusão é o principio em que não devem haver caracteristicas do texto em claro no texto cifrado

    Difusão é o principio que fiz que não devem haver caracteristicas do texto em claro no cifrado

7. **O que significa confusão em criptografia e como ela contribui para a proteção dos dados?**
    Confusão é o principio que diz que a relação entre o texto cifrado e a chave é tão complexa que deve ser impossivel descobrir a chave a partir do texto cifrado

    Confusão garante que a relação entre chave e o texto cifrado seja tão complexa que deve ser impossivel deduzir o valor da chave a partir do texto cifrado    

8. **Como você definiria o efeito avalanche em criptografia e por que ele é considerado uma propriedade importante?**
    No efeito avalanche, pequenas alterações no texto em claro geram grandes alterações no texto cifrado

    Efeito avalanche garante que pequenas mudanças no texto em claro geram grandes mudanças no texto cifrado

9. **O que é aleatoriedade em relação a criptografia e como ela influencia a segurança do criptograma?**
    Na aleatoriedade, o texto cifrado não deve possuir padrões de modo que o tornem inteligivel, tendo que ser completamente aleatorio

    Garante que o texto cifrado não possua nenhuma caracteristica inteligivel, sendo completamente aleatorio
    
10. **Quais são as propriedades essenciais de uma boa criptografia?**
    O custo de decifragem deve ser maior que o custo da informação, o tempo da decifragem deve ser maior que o tempo de vida util da informação. Mesmo com o tempo e o avanço computacional, o criptograma não deve ser cifrado
    
    Custo para decifrar maior que o valor da informação, tempo para decifrar maior que vida util da informação e mesmo com avanço computacional, deve ser impossivel decifrar

11. **Diferencie as cifras simétricas das cifras assimétricas.**
    A cifra simetrica possui uma chave secreta, que é utilizada tanto para cifrar quanto para decifrar a mensagem, ja a assimetrica possui duas chaves, a publica e a privada, a publica é utilizada para cifra e a privada para decifrar a informação

    Cifras simetricas possuem apenas um chave, chamada de chave secreta, que é utilizada para cifrar e decifrar.
    Ja na cifra assimetrica, possui chave publica e privada, a privada serve para decifrar e a publica para cifrar

12. **Quais são as vantagens e desvantagens das cifras simétricas como o AES e o DES?**
    Vantagens: são rapidas, faceis de implementar e hardware de baixo custo
    Desvantagens: Distribuição e armazenamento das chaves, troca inicial da chave, não garante autenticidade.

    Vantagem: facil de implementar, leve, simples harware baixo custo
    Desvantagem: Compartilhamento inicial de chave, armazenamento de chave, não garante autenticidade

13. **Explique como funciona a criptografia assimétrica e cite um exemplo de algoritmo desse tipo.**
    Um usuario gera um par de chaves, uma publica e outra privada, a publica é distribuida, e qualquer pessoa que desejar enviar uma mensagem secreta para o usuario deve utilizar a chave publica para cifrar, ao receber uma mensagem cifrada o usuario devera usar a chave privada para decifrar. Um exemplo de algoritmo é o RSA, utilizado amplamente para segurança de dados em transmissões pela internet.

    Um usuario cria uma chave publica e uma privada, a privada ele guarda, a publica distribui, quem quiser enviar uma mensagem secreta, deve cifrar com a chave publica e enviar para o usuario decifrar com a chave privada

14. **Quais são as principais diferenças entre cifras de fluxo e cifras de bloco?**
    As cifra de fluxo criptografam os dados de bit a bit, enquanto as de bloco criptografam dados em blocos de tamanho especifico, de 64 em 64 bits por exemplo.

    Fluxo: criptografa de bit a bit
    Bloco: criptografa em blocos de tamanho especifico (64 bits, 128 bits)