#include <stdio.h>

int rek(int x){
  if(x == 0) return 0;
  return x%100 + rek(x/100);
}
int main(){
  printf("%d",rek(18945));
  return 0;
}
