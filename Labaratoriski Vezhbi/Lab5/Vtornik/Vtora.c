#include <stdio.h>

int suma(int x){
  if(x != 0) return x + suma(x-1);
  else return x;
}

int main(){
  printf("%d", suma(7));
  return 0;
}
