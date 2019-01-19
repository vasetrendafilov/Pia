#include <stdio.h>

void swap(int *x, int *y){
  int pom = *x;
  *x = *y;
  *y = pom;
}

void vnes(int *x, char c, int element, int kraj){
  printf("Vnesi element %d on nizata %c: ", element+1, c);
  scanf("%d", x+element);
  if(element < kraj) vnes(x, c, element+1, kraj);
}

void pechati(int *x, int element, int kraj){
  printf("%d ", *(x+element));
  if(element < kraj) pechati(x, element+1, kraj);
}

void zamena(int *x, int *y, int element, int kraj){
  swap(x+element, y+element);
  if(element < kraj) zamena(x, y, element+1, kraj);
}

int main(){
  int k;

  printf("Vnesi broj na elementi na nizite: ");
  scanf("%d", &k);

  int x[k], y[k];
  vnes(x, 'x', 0, k-1);
  vnes(y, 'y', 0, k-1);

  zamena(x, y, 0, k-1);

  printf("Niza x: ");
  pechati(x, 0, k-1);
  printf("Niza y: ");
  pechati(y, 0, k-1);

  return 0;
}
