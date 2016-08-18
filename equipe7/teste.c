/* equipe:
    Fabiana Bezerra
    Paulo Roberto
    Paulo Silveira
    Pedro Sena

    5.Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles
    ocorre na mesma.
*/

#include <stdio.h>
#include <stdlib.h>

int aparece (int n, float *vet){
    int i,j;


	for(i=0; i<n; i++){
	    for(j=i-1; j>=0; j--){
	        if(vet[j] == vet[i]) {
                return 1;
            else
                return 0;
}

int main()
{
	float *sequencia, *ordenado;
	int n, i, j, fim, k, *vezes;
	fim=0;

	scanf("%i", &n);

	sequencia = (float*)malloc(n*sizeof(float));
	vezes = (int*)malloc(n*sizeof(int));
	ordenado = (float*)malloc(n*sizeof(float));

	for(i=0; i<n; i++) scanf("%f", &sequencia[i]);
    {
        //Se for, adiciona ele no vetor ordenado e conta quantos tem depois dele e coloca no vezes
	    if(aparece(n, sequencia)){
	        ordenado[fim] = sequencia[i];
	        vezes[fim] = 1;
	        for(j=i+1; j<n; j++){
	            if(sequencia[j] == ordenado[fim]){
	                vezes[fim]++;
	            }
	        }
	        fim++;
	    }
	}

	printf("Sequência: ");
	for(i=0; i<n-1; i++){
	    printf("%.1f, ", sequencia[i]);
	}
	printf("%.1f\n", sequencia[i]);

	printf("Frequências:  ");
	for(i=0; i<fim; i++){
	    printf("%.1f aparece %d vez(es)\n", ordenado[i], vezes[i]);
	}

	free(ordenado);
	free(sequencia);
	free(vezes);

	return 0;
}