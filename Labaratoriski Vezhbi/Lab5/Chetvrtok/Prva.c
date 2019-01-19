#include <stdio.h>

int delitel(int x, int y){
  if(y == 0) return x;
  else delitel(y, x%y);

}

int main(){
  printf("%d", delitel(10, 50));
  return 0;
}
