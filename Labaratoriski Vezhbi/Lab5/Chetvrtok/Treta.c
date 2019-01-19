#include <stdio.h>

int rek(int x){
  if(x == 0) return 0;
  if((x%10)%2 == 0) return x%10 + rek(x/10);
  else return rek(x/10);
}

int main(){
  printf("%d", rek(123456));
  return 0;
}
