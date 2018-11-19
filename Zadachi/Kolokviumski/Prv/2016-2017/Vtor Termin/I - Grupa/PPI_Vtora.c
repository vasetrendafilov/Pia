#include <stdio.h>

int brojCifri(int x){
  if (x == 0) return 0;
  return 1 + brojCifri(x/10);
}

int stepen(int x, int y){
  if (y == 0) return 1;
  return x * stepen(x, y-1);
}

int cifra(int x, int y){
  return (x / stepen(10, y-1)) % 10;
}

int main(){
  int broj, i;
  char bukva, p = ' ';

  printf("Vnesi cel povekjecifren broj: ");
  scanf("%d", &broj);

  printf("Vnesi onolku bukvi kolku shto ima cifri brojot: ");
  for(i = brojCifri(broj); i > 0; i--){
    int d = cifra(broj, i);
    scanf(" %c", &bukva);
    if (p != (bukva + d)) printf("%c", bukva + d);
    p = bukva + d;
  }


  return 0;
}
