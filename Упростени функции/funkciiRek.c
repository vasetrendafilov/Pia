#include <stdio.h>

/* Avtor: Nikola Stoimenov
   Rekurzivni funkcii za odredeni matemtichki izrazi
   *Napomena funkciite zavisat edna od druga
   *Ushte edna napomena nema da go razberete ova XD */

//Broj na cifri vo eden broj (Rekurzivno)
int brojCifri(int x){
  if (x == 0) return 0;
  return 1 + brojCifri(x/10);
}

//Zbir na cifrite vo brojot (Rekurzivno)
int zbirCifri(int x){
  if (x == 0) return 0;
  return (x % 10) + zbirCifri(x/10);
}

//Stepenuvanje na broj (Rekurzivno)
int stepen(int x, int y){
  if (y == 0) return 1;
  return x * stepen(x, y-1);
}

//prevrtuvanje na cifri (rekurzivno)
int prevrtiCifri(int x){
    if (x == 0) return 0;
    return x%10 * stepen(10, brojCifri(x)-1) + prevrtiCifri(x/10);
}

int main(){
  printf("%d\n", stepen(2, 5));
  return 0;
}
