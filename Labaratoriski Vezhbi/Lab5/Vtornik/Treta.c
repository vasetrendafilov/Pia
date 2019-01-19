#include <stdio.h>

void procent(int x){
  static float n = 0.01;
  if(n <= 1.0){
    printf("%1.0f procent = %0.2f\n",n*100, x*n);
    n += 0.01;
    procent(x);
  }
}

int main(){
  procent(1200);
  return 0;
}
