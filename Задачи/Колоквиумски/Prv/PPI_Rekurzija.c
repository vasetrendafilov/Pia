#include <stdio.h>
//Prv Kolokvium Prva grupa Ispitna zadacha rekurzija

void rekurzija(int x, char z){
  if (x > 0){
    rekurzija(x/10, z);
    printf("%c", z + (x%10));
  }
}

int main(){
  int broj = 0;
  char bukva = ' ';

  printf("Vnesi Broj:\n");
  scanf("%d", &broj);

  printf("Vnesi bukva:\n");
  scanf(" %c", &bukva);

  rekurzija(broj, bukva);
  return 0;
}
