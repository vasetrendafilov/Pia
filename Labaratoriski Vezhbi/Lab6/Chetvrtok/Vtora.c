#include <stdio.h>
#define MAX 10

void swap(int *x, int *y){
  int pom = *x;
  *x = *y;
  *y = pom;
}

int main(){
  int matrica[MAX][MAX], pom, k, i, j;

  printf("Vnesi broj na redici/koloni: ");
  scanf("%d", &k);

  printf("Vnesi matrica: \n");
  for(i=0; i<k; i++) for(j=0; j<k; j++) scanf("%d", &matrica[i][j]);
  printf("\n\n");

  for(i=0; i<k; i++){
    for(j=0; j<k; j++){
      if(j == (k-1-i)) swap(&matrica[i][i], &matrica[i][j]);
    }
  }
  for(i=0; i<k; i++){
   for(j=0; j<k; j++){
     printf("%d ", matrica[i][j]);
    }
    printf("\n");
  }
  return 0;
}
