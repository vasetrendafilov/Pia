#include <stdio.h>

//Funkcija za prevrtuvanje cifri na broj
int prevrti(int x){
  int broj = 0;
  while(x != 0){
    broj += broj * 10 + x%10;
    x /= 10;
  }
  return broj;
}

//Funkcija za stepenuvanje
int stepen(int x, int y){
  int pom = 1;
  for(y; y >= 1; y--) pom *= x;
  return pom;
}

//Funkcija za broj na cifri
int brCifri(int x){
  int broj = 0;
  while(x != 0){
    x /= 10;
    broj++;
  }
  return broj;
}

//Odredena cifra od broj
int cifra(int x, int y){
    return (x/stepen(10, y-1))%10;
}

//Zbir na cifri
int zbirCifri(int x){
  int i, zbir = 0;
  for(i = brCifri(x); i > 0; i--)
  zbir += cifra(x, i);
  return zbir;
}

int main(){
  printf("%d\n", cifra(126516, 3));
  return 0;
}
