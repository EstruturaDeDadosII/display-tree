void bubble_sort(int vetor[], int n) {
    int k, j, aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void insertionSort(int vetor[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = vetor[i];
       j = i-1;
 
       while (j >= 0 && vetor[j] > key)
       {
           vetor[j+1] = vetor[j];
           j = j-1;
       }
       vetor[j+1] = key;
   }
}
