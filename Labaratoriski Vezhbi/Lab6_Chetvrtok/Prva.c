#include <stdio.h>

void swap(int *x, int *y){
  int pom = *x;
  *x = *y;
  *y = pom;
}

void sort(int *x, int elementi){
  int i, j;
  for(i=0; i<elementi; i++)
    for(j=0; j<elementi; j++)
      if(*(x+i) < *(x+j)) swap(x+i, x+j);

  if((*(x)%2) == 0 || *(x) == 0){
    for(i=0; i<elementi; i++)
      for(j=0; j<elementi; j++)
        if((*(x+i)%2 == 0) && (*(x+j)%2 != 0)) swap(x+i, x+j);
  }
  if((*(x)%2) != 0){
    for(i=0; i<elementi; i++)
      for(j=0; j<elementi; j++)
        if((*(x+i)%2 != 0) && (*(x+j)%2 == 0)) swap(x+i, x+j);
  }
}

int main(){
  int i;
  int niza[] = {5, 1, 2, 3, 4, 6, 12, 10, 9};
  sort(niza, 9);
  for(i=0; i<9; i++) printf("%d ", niza[i]);
  return 0;
}
