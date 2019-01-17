//Avtor: Nikola Stoimenov
//Vtor parcijalen ispit 29.12.2014, Termin 1 Grupa 1, Prva Zadacha...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

//Prototip funkcii
void funk(char *x, int *y, int element, int kraj);
void printBrojni(int *x, int element, int kraj);
void printText(char *x, int element, int kraj);


int main(){
  char tekst[MAX] = "Zdrav1, k.ako si?";
  int i, niza[MAX];

  printText(tekst, 0, strlen(tekst));
  funk(tekst, niza, 0, strlen(tekst));
  printBrojni(niza, 0, strlen(tekst));
  return 0;
}

//Funkcija za obrabotka na podatocite vo nizite....
void funk(char *x, int *y, int element, int kraj){
  if(isalnum(*(x+element))){ //Proveruva dali elementot od nizata e Alfa-Numerichki
    if(element == 0 || !isalnum(*(x+element - 1))) *(y+element) = 1;
    if(isalnum(*(x+element - 1))) *(y+element) = 0;
  }
  else if(ispunct(*(x+element))) *(y+element) = 2; //Proveruva dali e specijalen znak
  else if(isspace(*(x+element))) *(y+element) = 3; //Proveruva dali e prazno mesto
  if(element < kraj) funk(x, y, element+1, kraj); //Stop sluchaj i rekurzivno povikuvanje na funkcijata od sledniot element
}

//Funkcija za pechatenje na brojnite nizi...
void printBrojni(int *x, int element, int kraj){
  if(element < kraj){ //Stop sluchaj
    printf("%d ", *(x+element)); //Pechatenje na elementot
    printBrojni(x, element+1, kraj); //Rekurzivno povikuvanje na funkcijata od sledniot element
  } else printf("\n");
}

//funkcija za pechatenje na tekstualnite nizi....
void printText(char *x, int element, int kraj){
  if(element < kraj){ //Stop sluchaj
    printf("%c", *(x+element)); //Pechatenje na elementot
    printText(x, element+1, kraj); //Rekurzivno povikuvanje na funkcijata od sledniot element
  } else printf("\n");
}
