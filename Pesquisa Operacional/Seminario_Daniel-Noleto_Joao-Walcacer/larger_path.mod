# Conjunto de vértices
set V;

# Conjunto de arestas (u, v), definido como um subconjunto do produto cartesiano dos vértices
set E within V cross V;

# Pesos das arestas
param w{(i, j) in E};

# Vértice inicial e final (source e sink)
param s symbolic;
param t symbolic;

# Variável de decisão: 1 se a aresta (i, j) é usada no caminho, 0 caso contrário
var x{(i, j) in E}, binary;

# Função objetivo: minimizar o peso total do caminho
minimize TotalCost:
    sum{(i, j) in E} w[i, j] * x[i, j];

# Restrição de fluxo para cada vértice v
s.t. FlowBalance{v in V}:
    sum{(i, v) in E} x[i, v] - sum{(v, j) in E} x[v, j] =
        if v = s then -1
        else if v = t then 1
        else 0;

# Solucionar o problema
solve;

# Exibir as variáveis de decisão
display x;

end;
