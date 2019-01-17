#include <stdio.h>
#include <ctype.h>
#include <string.h>

int zborBr(char *niza, char *zbor){
  int brojach = 0;
  char *pok = strstr(niza, zbor);
  while(pok){
    brojach++;
    pok = strstr(pok+1, zbor);
  }
  return brojach;
}

int main(int argc, char *argv[]){
  FILE *fp;
  char tekst[256];
  int linija = 1, brojach = 0;

  if(argv[1] == NULL){
    printf("Upatstvo za koristenje: \nTest ImeNaDatoteka.Nastavka");
    return -1;
  }
  if((fp = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "Ne mozham da ja otvoram datotekata \"%s\"", argv[1]);
    return -1;
  }
  else printf("Datotekata \"%s\" e uspeshno otvorena\n", argv[1]);

  while((fgets(tekst, 256, fp)) != NULL){
    int pom = zborBr(tekst, argv[2]);
    if(pom){
      printf("Red broj: %d, Povtoruvanja: %d\n", linija, pom);
    }
    linija++;
    brojach += pom;
  }
  fclose(fp);
  printf("Vkupno povtoruvanja na zborot %s: %d", argv[2], brojach);
  return 0;
}
