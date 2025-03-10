Instruções para executar os códigos:

Temos dois códigos, o larger_path e o shortest_path. O larger é uma versão maior do problema do caminho mais curto, enquanto o shortest é uma versão menor, sendo que para cada um temos o .mod e o .dat.

Para executar os códigos, os seguintes comandos deverão ser executados em um terminal aberto no mesmo diretório dos arquivos:

larger_path:  glpsol --model larger_path.mod --data larger_path.dat --output solution_larger.txt

shortest_path:  glpsol --model shortest_path.mod --data larger_path.dat --output solution_shortest.txt

Após executar, será gerado um arquivo .txt solution, onde estarão os resultados.

Em resumo no diretório temos os slides em PDF, os códigos MathProg em .dat e .mod, temos uma implementação do algoritmo djisktra em python e os resultados em .txt.