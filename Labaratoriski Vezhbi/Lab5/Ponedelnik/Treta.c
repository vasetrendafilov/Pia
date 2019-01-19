#include <stdio.h>

int rek(int x){
  static int  n = 2;
  if(n == x-1) return 0;
  if(x%n == 0) return 1;
  else{
    n++;
    rek(x);
  }
}

int main(){
  if(rek(13)) printf("Brojot ne e prost");
  else printf("Brojot e prost");
  return 0;
}
