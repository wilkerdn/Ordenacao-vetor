#include <stdio.h>

void troca(int* a, int* b) {
     int aux;
     aux = *a;
     *a = *b;
     *b = aux;
}

void inicializar_vetor(int* vet) {
	vet[0] = 60;
	vet[1] = 20;
	vet[2] = 80;
	vet[3] = 40;
	vet[4] = 70;
	vet[5] = 90;
	vet[6] = 30;
	vet[7] = 10;
	vet[8] = 50;
	vet[9] = 100;
}

void mostrar_vetor(int* vet) {
	int i = 0;
	printf("\n\n");
	for (i = 0; i < 10; i++){
	    printf("%d\n",vet[i]);
	}
}

void selectionSort(int* vet) { 

  int i, j, min;

  for (i = 0; i < (10-1); i++) {
     min = i;
   
     for (j = (i+1); j < 10; j++) {
        if(vet[j] < vet[min]) 
           min = j;
     }  
        
     if (i != min) {
        troca(&vet[i],&vet[min]);
     }
  }
}

void insertionSort(int* vet){
	int i, j;
 
	for(i=1; i<10; i++) {
		for(j = i; j > 0; j--) {
            if(vet[j-1] > vet[j]){
               troca(&vet[j-1], &vet[j]);
            } else {
				break;
			}
         }
	}
	
}

int main(int argc, char** argv){		
	int v[10];

    inicializar_vetor(v);
	
	//insertionSort(v);
	selectionSort(v);
	
	mostrar_vetor(v);
	
	return 0;
}
