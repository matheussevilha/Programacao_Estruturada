/* Neste exercício, você vai implementar o algoritmo de busca binária em um vetor ordenado. */

#include <stdio.h>

void ordenacao(int lista[], int z)
{
   int j;
   for(j = 0; j < z; j++)
   {
        //Definindo o primeiro valor como o min
        int min = lista[j];
        int index_min = j;
        int k, temp;
        
        for(k = j+1; k < z; k++)
        {
            //Comparando com os próximos valores do vetor
            if(min > lista[k])
            {
                //Definindo o menor valor como min
                min = lista[k];
                index_min = k;
            }
        }
        //Caso o min nao seja o primeiro valor, a troca de posiçao é realizada
        if(index_min != j)
        {
            temp = lista[j];
            lista[j] = min;
            lista[index_min] = temp;
        }

   }
}

int busca_binaria(int lista[], int z, int chave)
{
    int ini, fim;
    ini = 0;
    fim = z -1;
    while(ini != fim)
    {
        if(chave <= lista[(ini+fim)/2])
        {
            fim = (ini+fim)/2;
        }
        else
        {
            ini = ((ini+fim)/2)+ 1;
        }
    }

    if(lista[ini] == chave)
    {
        return ini;
    }
    else
    {
        return (-1);
    }
}

int main()
{
    //Quantidade de elementos do vetor
    int n;
    printf("Informe quantos números terá na lista: ");
    scanf("%d", &n);

    //Definindo o vetor nao ordenado
    int valores[n];
    int i;
    printf("Digite os valores da lista:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &valores[i]);
    }

    //Ordenando a lista
    ordenacao(valores, n);
    printf("Lista ordenada: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", valores[i]);
    }
    putchar('\n');

    //Definindo a chave
    int chave;
    printf("Digite a chave: ");
    scanf("%d", &chave);

    //Realizando a busca binária
    if(busca_binaria(valores, n, chave) == (-1))
    {
        printf("A chave nao está na lista! \n");
    }
    else
    {
        printf("A chave está na posiçao: %d", (busca_binaria(valores, n, chave) + 1));
    }

    return 0;
}
