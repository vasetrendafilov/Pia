#include <stdio.h>
/*
  Prv parcijalen, Prv termin, Vtora Grupa, Vtora Zadacha...
  Avtor: Nikola Stoimenov;
*/
int main(){
  unsigned int broj, a = 0;

  printf("Vnesuvaj dvocifreni broevi (Trocifren broj ili znak, za stop):\n");
  while(scanf("%u", &broj) && broj < 100){
    if (broj > 9) a = a*100 + broj%100;
    else a = a*10 + broj%10;
  }

  printf("Poveli: %u", a);
  return 0;
}
