#include <stdio.h>
#define MAX 50

void funkcija(int *x, int element, int kraj){
  if(element < kraj) funkcija(x, element+1, kraj);
  printf("%d ", *(x+element));
}

int main(){
  int x[50], k, i;

  printf("Vnesi broj na elementi na niza: ");
  scanf("%d", &k);

  for(i=0; i<k; i++){
    printf("Vnesi x[%d] = ", i+1);
    scanf("%d", &x[i]);
  }

  funkcija(x, 0, k-1);
  return 0;
}
