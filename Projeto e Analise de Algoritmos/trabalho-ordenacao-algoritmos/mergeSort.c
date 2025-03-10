#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// Fun��o para mesclar dois subarrays
void merge(int *vetor, int esquerda, int meio, int direita, long long *comparacoes, long long *trocas) {
    int i, j, k;
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    // Cria��o de arrays tempor�rios
    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));

    // Copia dados para os arrays tempor�rios L[] e R[]
    for (i = 0; i < n1; i++) {
        L[i] = vetor[esquerda + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = vetor[meio + 1 + j];
    }

    // Mescla os arrays tempor�rios de volta para vetor[esquerda..direita]
    i = 0; // �ndice inicial do primeiro subarray
    j = 0; // �ndice inicial do segundo subarray
    k = esquerda; // �ndice inicial do array mesclado

    while (i < n1 && j < n2) {
        (*comparacoes)++; // Conta cada compara��o
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        } else {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        vetor[k] = L[i];
        i++;
        k++;
        (*trocas)++; // Conta a troca
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        vetor[k] = R[j];
        j++;
        k++;
        (*trocas)++; // Conta a troca
    }

    // Libera a mem�ria dos arrays tempor�rios
    free(L);
    free(R);
}

// Fun��o recursiva do Merge Sort
void merge_sort(int *vetor, int esquerda, int direita, long long *comparacoes, long long *trocas) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Ordena as duas metades
        merge_sort(vetor, esquerda, meio, comparacoes, trocas);
        merge_sort(vetor, meio + 1, direita, comparacoes, trocas);

        // Mescla as duas metades
        merge(vetor, esquerda, meio, direita, comparacoes, trocas);
    }
}

// Fun��o para testar o Merge Sort e medir tempo, compara��es e trocas
void testar_merge_sort(int *lista, int tamanho, const char *descricao) {
    long long comparacoes = 0;  // Inicializa contagem de compara��es
    long long trocas = 0;  // Inicializa contagem de trocas
    
    printf("Ordenando lista %s...\n", descricao);

    clock_t inicio = clock();  // Captura o tempo inicial

    merge_sort(lista, 0, tamanho - 1, &comparacoes, &trocas);  // Ordena a lista

    clock_t fim = clock();  // Captura o tempo final
    double tempo_gasto = (double)(fim - inicio) * 1000.0 / CLOCKS_PER_SEC;  // Tempo em milissegundos

    // Exibe as m�tricas
    printf("M�tricas para a lista %s:\n", descricao);
    printf("Tempo de execu��o: %f milissegundos\n", tempo_gasto);
    printf("N�mero de compara��es: %lld\n", comparacoes);
    printf("N�mero de trocas: %lld\n\n", trocas);
}

// Fun��o para ler a lista de um arquivo .txt
int* ler_lista_de_arquivo(const char *nome_arquivo, int tamanho) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nome_arquivo);
        return NULL;
    }

    int *lista = (int*)malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++) {
        fscanf(arquivo, "%d", &lista[i]);
    }

    fclose(arquivo);
    return lista;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Tamanhos das listas
    int mil = 1000;
    int dezMil = 10000;
    int cinquentaMil = 50000;
    int cemMil = 100000;

    // Ler listas de arquivos .txt
    int *MilAleatoria = ler_lista_de_arquivo("listas/lista_aleatoria_1000.txt", mil);
    int *MilOrdenada = ler_lista_de_arquivo("listas/lista_ordenada_1000.txt", mil);
    int *MilInversa = ler_lista_de_arquivo("listas/lista_inversa_1000.txt", mil);

    int *DezAleatoria = ler_lista_de_arquivo("listas/lista_aleatoria_10000.txt", dezMil);
    int *DezOrdenada = ler_lista_de_arquivo("listas/lista_ordenada_10000.txt", dezMil);
    int *DezInversa = ler_lista_de_arquivo("listas/lista_inversa_10000.txt", dezMil);

    int *CinquentaAleatoria = ler_lista_de_arquivo("listas/lista_aleatoria_50000.txt", cinquentaMil);
    int *CinquentaOrdenada = ler_lista_de_arquivo("listas/lista_ordenada_50000.txt", cinquentaMil);
    int *CinquentaInversa = ler_lista_de_arquivo("listas/lista_inversa_50000.txt", cinquentaMil);

    int *CemAleatoria = ler_lista_de_arquivo("listas/lista_aleatoria_100000.txt", cemMil);
    int *CemOrdenada = ler_lista_de_arquivo("listas/lista_ordenada_100000.txt", cemMil);
    int *CemInversa = ler_lista_de_arquivo("listas/lista_inversa_100000.txt", cemMil);

    // Testar o Merge Sort com listas de tamanho 1.000
    testar_merge_sort(MilAleatoria, mil, "Aleat�ria de 1.000 elementos");
    testar_merge_sort(MilOrdenada, mil, "Ordenada de 1.000 elementos");
    testar_merge_sort(MilInversa, mil, "Inversa de 1.000 elementos");

    // Testar o Merge Sort com listas de tamanho 10.000
    testar_merge_sort(DezAleatoria, dezMil, "Aleat�ria de 10.000 elementos");
    testar_merge_sort(DezOrdenada, dezMil, "Ordenada de 10.000 elementos");
    testar_merge_sort(DezInversa, dezMil, "Inversa de 10.000 elementos");

    // Testar o Merge Sort com listas de tamanho 50.000
    testar_merge_sort(CinquentaAleatoria, cinquentaMil, "Aleat�ria de 50.000 elementos");
    testar_merge_sort(CinquentaOrdenada, cinquentaMil, "Ordenada de 50.000 elementos");
    testar_merge_sort(CinquentaInversa, cinquentaMil, "Inversa de 50.000 elementos");

    // Testar o Merge Sort com listas de tamanho 100.000
    testar_merge_sort(CemAleatoria, cemMil, "Aleat�ria de 100.000 elementos");
    testar_merge_sort(CemOrdenada, cemMil, "Ordenada de 100.000 elementos");
    testar_merge_sort(CemInversa, cemMil, "Inversa de 100.000 elementos");

    // Liberar a mem�ria das listas lidas
    free(MilAleatoria);
    free(MilOrdenada);
    free(MilInversa);

    free(DezAleatoria);
    free(DezOrdenada);
    free(DezInversa);

    free(CinquentaAleatoria);
    free(CinquentaOrdenada);
    free(CinquentaInversa);

    free(CemAleatoria);
    free(CemOrdenada);
    free(CemInversa);

    return 0;
}
