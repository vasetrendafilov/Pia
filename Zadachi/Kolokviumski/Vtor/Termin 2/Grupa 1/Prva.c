#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 20


int main(){
  char x[MAX], y[MAX], c;
  int z[MAX], i, k, temp, tf = 1;

  printf("Vnesi edna tekstualna niza: ");
  gets(x);
  k = strlen(x);

  printf("Vnesi druga tekstualna niza: ");
  gets(y);

  for(i=0; i<k; i++){
    printf("Vnesi broj[%d] = ", i);
    scanf("%d", &z[i]);
  }

  for(i=0; i<k; i++){
    c = x[i] + z[i];
    if(c != y[i]) temp = 0;
    if(temp == 0) tf = 0;
  }
  if(tf) printf("Mozhe od prvata tekstualna niza preku nizata od celi broevi da se dobie vtorata tekstualna.");
  else printf("Ne mozhe od prvata tekstualna niza preku nizata od celi broevi da se dobie vtorata tekstualna.");
  return 0;
}
