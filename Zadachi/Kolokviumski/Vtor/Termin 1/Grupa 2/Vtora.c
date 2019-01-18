#include <stdio.h>
#define MAX 10
int main(){
  int matrica[MAX][MAX], n, k, i, j;

  printf("Vnesi broj na redici/koloni: ");
  scanf("%d", &n);
  printf("Vnesi broj: ");
  scanf("%d", &k);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      matrica[i][j] = j+k;
    }
    k--;
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      printf("%d\t", matrica[i][j]);
    }
    printf("\n\n");
  }
  return 0;
}
