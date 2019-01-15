#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

void funk(char *x, int *y, int elBr){
  int i;
  for(i=0; i < elBr; i++){
    if(isalnum(*(x+i))){
      if(i==0 || isalnum(*(x+i-1)) == 0) *(y+i)=1;
      if(isalnum(*(x+i-1))) *(y+i)=0;
    }
    if(ispunct(*(x+i))) *(y+i) = 2;
    if(isspace(*(x+i))) *(y+i) = 3;
  }
}

int main(){
  char tekst[MAX] = "Zdrav1, k.ako si?";
  int i, niza[MAX];

  //gets(tekst);
  funk(tekst, niza, strlen(tekst));

  for(i=0; i<strlen(tekst); i++){
    printf("%d ", niza[i]);
  }
  return 0;
}
