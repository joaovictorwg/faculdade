

1. ### Qual é a diferença entre escalonamento de privilégios vertical e horizontal?
    Vertical: quando usuario ou aplicativo com privilegios inferiores acessa funções ou conteudos que requerem privilegios superiores (user comum -> superuser)

    Horizontal: quando um usuario acessa funções ou conteudos com o mesmo nivel de privilegio (user comum -> user comum)
 
2. ### Dê dois exemplos de vulnerabilidades que podem ser exploradas para escalonamento de privilégios.
    Vulnerabilidades de kernel e de aplicações

3. ### Explique o que o comando `sudo -l` faz em um sistema operacional.
    Lista privilegios disponiveis ao user atual

4. ### Qual é a função do comando `id` na enumeração de usuários?
    Id do user atual e seus grupos    

5. ### O que é o **LinPEAS** e como ele pode ajudar na elevação de privilégios?
    

6. ### Qual é o papel das permissões SUID na elevação de privilégios?
    São permissões para superuser, 

7. ### Por que a má configuração de tarefas agendadas (`cron`) pode levar a elevação de privilégios?
    
8. ### Cite um exemplo de vulnerabilidade de kernel que poderia ser explorada para elevação de privilégios.
    
9. ### Quais informações podem ser obtidas usando o comando `uname -a`?
    infos sobre o kernl
10. ### O que o **Exploit DB** fornece para ajudar a identificar vulnerabilidades em sistemas operacionais?
    vulnerabilidades e instruções para explorar as vulns

**A elevação de privilégios pode ser obtida através de:**
    Força bruta
    Arquivos privados de autenticação, chaves SSH
    Vulnerabilidade de hardware
    Vulnerabilidade de kernel
    Vulnerabilidade de aplicação
    Permissão de sudo mal configurada
    Tarefas agendadas cron
    Permissões SUID configuradas incorretamente    