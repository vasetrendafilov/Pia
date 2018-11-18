#include <stdio.h>

void rekurzija(int x, int y){
  if ((x != 0) && (y != 0)) rekurzija(x/10, y/10);

  if ((x%10) + (x%10) > 9) printf("1");
  else if ((x%10 > 0) || (x%10 > 0)) printf("0");
}

int main(){
  int a, b;

  printf("Vnesi eden broj: ");
  scanf("%d", &a);

  printf("Vnesi drug broj: ");
  scanf(" %d", &b);

  printf("Poveli: ");
  rekurzija(a, b);
  return 0;
}
