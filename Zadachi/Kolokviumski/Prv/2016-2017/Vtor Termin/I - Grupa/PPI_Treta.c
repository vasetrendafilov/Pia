#include <stdio.h>

void rekurzija(char x, char y){
  if (x < y){
    rekurzija(x, y-1);
    printf("%c ", y);
  }
  else if(x > y){
    rekurzija(x-1, y);
    printf("%c ", x);
  }
  else printf("%c ", x);
}

int main(){
  char a, b;

  printf("Vnesi dve bukvi (oddeleni so mesto):");
  scanf("%c %c", &a, &b);

  rekurzija(a, b);
  return 0;
}
