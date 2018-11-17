#include <stdio.h>

int main(){
  int i = 0; int br;
  while(scanf("%d", &br)){
    i = i*10 + br%10;
  }
  printf("%d\n", i);
  return 0;
}
