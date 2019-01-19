#include <stdio.h>

int rek(int x){
  if(x == 0) return 0;
  else return 1 + rek(x/10);
}

int main(){
  printf("%d", rek(100));
  return 0;
}
