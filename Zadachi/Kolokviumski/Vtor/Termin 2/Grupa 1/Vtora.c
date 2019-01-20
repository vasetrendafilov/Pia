//Avtor: Nikola Stoimenov, Petar Mechev, Petar Panov, Kristijan Cvetkov

#include <stdio.h>

int parnost(int x){
  if(x%2 == 0) return 1;
  else return 0;
}

int main(){
  int matrica[50][50] = {0}, k, i, j;
  printf("Vnesi redici/koloni: ");
  scanf("%d", &k);

  for(i=0; i<k; i++){
    for(j=0; j<k; j++){
      if(i == j) matrica[i][j] = 1;
      if(i+j == k-1) matrica[i][j] = 1;
    }
  }

  if(parnost(k)){
    for(i=0;i<k;i++){
      for(j=0;j<k;j++){
        if(j==k/2 || j==k/2-1) matrica[i][j] = 1;
        if(i == k/2 || i == k/2-1) matrica[i][j] = 1;
      }
    }
  } else {
    for(i=0;i<k;i++){
      for(j=0;j<k;j++){
        if(j==k/2) matrica[i][j] = 1;
        if(i == k/2) matrica[i][j] = 1;
      }
    }
  }

  for(i=0; i<k; i++){
    for(j=0; j<k; j++){
      printf("%d\t", matrica[i][j]);
    }printf("\n\n");
  }

  return 0;
}
