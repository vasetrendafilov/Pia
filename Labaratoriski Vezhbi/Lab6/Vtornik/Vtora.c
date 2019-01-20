#include <stdio.h>
#define MAX 100

void swap(int *x, int *y){
  int pom = *x;
  *x = *y;
  *y = pom;
}

int main(){
  int pod[100][100], k, i, j, zbirNad = 0, zbirPod = 0;
  printf("Vnesi broj na redici/koloni");
  scanf("%d", &k);

  for(i=0; i<k; i++)
    for(j=0; j<k; j++)
      scanf("%d", &pod[i][j]);

  for(i=0; i<k; i++){
    for(j=k-1; j!=0; j--){
      swap(&pod[i][j], &pod[j][i]);
    }
  }

  for(i=0; i<k; i++){
    for(j=0; j<k; j++){
      printf("%d\t", pod[i][j]);
    } printf("\n\n");
  }

  for(i=0; i<k; i++){
    for(j=0; j<k; j++){
      if(i>j) zbirNad += pod[i][j];
      if(i<j) zbirPod += pod[i][j];
    }
  }
  printf("Nad: %d, Pod: %d", zbirNad, zbirPod);

  return 0;
}
