#include <stdio.h>

void rek(int x){
  static int n = 0;
  printf("%d ", n);
  n++;
  if(n != x+1) rek(x);
}

int main(){
  rek(10);
  return 0;
}
