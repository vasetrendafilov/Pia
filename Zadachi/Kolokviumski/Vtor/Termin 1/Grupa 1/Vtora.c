//Avtor Nikola Stoimenov
//Vtor Parcijalen 29.12.2014, Termin 1 Grupa 1, Vtora Zadacha...
#include <stdio.h>
#define max 10

void isp(int n, int (*x)[n],int br){
  int i, j;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      *((x+i)[j]) = br+i+j;
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      printf("%d\t", *((x+i)[j]));
    }
    printf("\n\n");
  }
}

int main(){
  int x[max][max], br, n;

  printf("Vnesi broj na redici/koloni: ");
  scanf("%d", &n);
  printf("Vnesi eden broj: ");
  scanf("%d", &br);
  isp(n, x, br);
  return 0;
}
