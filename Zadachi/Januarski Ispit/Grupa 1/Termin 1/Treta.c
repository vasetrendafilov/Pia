#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
  FILE *IN_DAT, *OUT_DAT;
  if(argv[1] == NULL){
    printf("Upatstvo za koristenje: ime na programa vlezna.txt izlezna.txt\n");
    return -1;
  }
  if((IN_DAT=fopen(argv[1],"r"))==NULL){
    fprintf(stderr,"Ne moze da se otvori datotekata \"%s\"", argv[1]);
    return -1;
  }
  if((OUT_DAT=fopen(argv[2],"w"))==NULL){
    fprintf(stderr,"Ne moze da se otvori datotekata \"%s\"", argv[2]);
    return -1;
  }

  int i, j, brojach = 0;
  char tekst[256], c;
  while((fgets(tekst, 256, IN_DAT)) != NULL){
    printf("%s", tekst);
    for(i=0; i<strlen(tekst)-1; i++){
      c = tekst[i];
      if(tekst[i] != '^'){
        for(j=0; j<strlen(tekst)-1; j++){
          if(isupper(c)) c = tolower(c);
          if(isupper(tekst[i])) tekst[i] = tolower(tekst[i]);
          if(c == tekst[j]){ brojach++; tekst[j] = '^';}
        }
      }
      if(brojach>1) fprintf(OUT_DAT, "%c: %d, ", c, brojach);
      brojach = 0;
    }
    fprintf(OUT_DAT, "\n\n");
  }
  fclose(IN_DAT);
  fclose(OUT_DAT);
  return 0;
}
