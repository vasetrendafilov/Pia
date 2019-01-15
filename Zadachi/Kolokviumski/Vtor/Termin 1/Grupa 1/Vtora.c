#include <stdio.h>
#define max 10

void isp(int x[max][max], int n, int k, int br){
  int i, j;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      x[i][j] = br+i+j;
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      printf("%d\t", x[i][j]);
    }
    printf("\n\n");
  }
}

int main(){
  int x[max][max], br, n, k, i, j;

  printf("Vnesi broj na redici: ");
  scanf("%d", &n);
  printf("Vnesi broj na koloni: ");
  scanf("%d", &k);
  printf("Vnesi eden broj: ");
  scanf("%d", &br);

  isp(x, n, k, br);
  return 0;
}
