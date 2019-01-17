//Avtor Nikola Stoimenov
//Vtor parcijalen ispit 29.12.2017, termin 1 Grupa 2, prva

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 20

int absolutna(int x);
void printBrojna(int *x, int element, int kraj);
void printText(char *x, int element, int kraj);
void funk(char *x, int *y, int element, int kraj);

int main(){
  char tekst[] = "Zdravo, k.ako si?";
  int niza[MAX];

  printText(tekst, 0, strlen(tekst));
  funk(tekst, niza, 0, strlen(tekst));
  printBrojna(niza, 0, strlen(tekst));
  return 0;
}

void funk(char *x, int *y, int element, int kraj){
  if(isupper(*(x+element))) *(x+element) = tolower(*(x+element));
  if(!isspace(*(x+element))){
    if(isspace(*(x+element+1)) || isspace(*(x+element-1))) *(y+element) = 0;
    else if(isalnum(*(x+element)) && isalnum(*(x+element+1))) *(y+element) = *(x+element) - *(x+element+1);
    else if(isalnum(*(x+element)) && ispunct(*(x+element+1))) *(y+element) = -1;
    else *(y+element) = 0;
  }
  else *(y+element) = 0;
  if(element < kraj-1) funk(x, y, element+1, kraj);
}

void printText(char *x, int element, int kraj){
  printf("%c", *(x+element));
  if(element < kraj) printText(x, element+1, kraj);
}

void printBrojna(int *x, int element, int kraj){
  printf("%d ", *(x+element));
  if(element < kraj) printBrojna(x, element+1, kraj);
}

int absolutna(int x){
  if(x<0) x *= -1;
  return x;
}
