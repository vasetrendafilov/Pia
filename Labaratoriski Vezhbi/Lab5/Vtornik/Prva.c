#include <stdio.h>

int stepen(int x, int y){
  if(y == 0) return 1;
  return x * stepen(x, y-1);
}

int main(){
  printf("%d", stepen(2, 3));
  return 0;
}
