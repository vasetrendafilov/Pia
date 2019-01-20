#include <stdio.h>
#define MAX 50

int main(){
  int i, j, k, r;
  char matrica[MAX][MAX] = {' '};

  printf("Vnesi broj na koloni: ");
  scanf("%d", &k);
  r = (k/2)+1;

  for(i=0;i<r;i++){
    for(j=0;j<k;j++){
      if((j >= (k/2)-i) && (j <= (k/2)+i)) matrica[i][j]= '^';
    }
  }

  for(i=0; i<r; i++){
    for(j=0; j<k; j++){
      printf("%c", matrica[i][j]);
    }printf("\n");
  }

  printf("\nSrekjna nova godina!!\n");
  return 0;
}
