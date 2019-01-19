#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 30

void funk(char *x, int kraj){
  int i=0, n=0;
  while(i<kraj){
    if(isdigit(*(x+i))) n = *(x+i) - '0';
    else i++;

    if((n!=0) && (n%2 == 0)){
      while(n > 0){
        if(isalpha(*(x+i)) && islower(*(x+i))){
          printf("%c", *(x+i));
          n--;}
        i++;
      }printf(" ");
    }

    if((n!=0) && (n%2 != 0)){
      while(n > 0){
        if(isalpha(*(x+i)) && isupper(*(x+i))){
          printf("%c", *(x+i));
          n--;}
        i++;
      }printf(" ");
    }
  }
}

int main(){
  char tekst[MAX];
  printf("Vnesi tekstualna niza: ");
  gets(tekst);
  funk(tekst, strlen(tekst)-1);
  return 0;
}
