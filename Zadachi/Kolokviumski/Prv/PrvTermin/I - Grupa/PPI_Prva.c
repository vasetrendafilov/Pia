#include <stdio.h>
/*
  Prv Parcijalen, Prva Grupa, Prva zadacha
  Avtor: Nikola Stoimenov
*/

int stepen(int x, int y){
  if (y == 0) return 1;
  return x * stepen(x, y-1);
}

int denMesec(int x){
  if(((x <= 7) && (x%2 != 0)) || ((x >= 8 && x <= 12) && (x%2 == 0))) return 31;
  else return 30;
  if(x == 2) return 28;
  return 0;
}

int main(){
  int den, mesec, godina, datum;

  printf("Vnesete datum (format: DD-MM-GGGG): ");
  scanf("%d-%d-%d", &den, &mesec, &godina);

  datum = (godina * stepen(10, 4)) + (mesec * stepen(10, 2) + den);

  printf("Mesecot %d ima ushte %d denovi do kraj.\n", mesec, denMesec(mesec) - den);
  printf("Ima ushte %d meseci do novata %d godina", 12 - mesec, godina + 1);

  return 0;
}
