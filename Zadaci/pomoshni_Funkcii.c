#include <stdio.h>

int prevrti(int x){
  int broj = 0;
  while(x != 0){
    broj += broj * 10 + x%10;
    x /= 10;
  }
  return broj;
}

int stepen(int x, int y){
  int pom = 1;
  for(y; y >= 1; y--) pom *= x;
  return pom;
}

int brCifri(int x){
  int broj = 0;
  while(x != 0){
    x /= 10;
    broj++;
  }
  return broj;
}

int cifra(int x, int y){
    return (x/stepen(10, y-1))%10;
}

int main(){
  printf("%d\n", cifra(15165, 3));
  return 0;
}
