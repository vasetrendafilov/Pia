#include <stdio.h>
#include <ctype.h>

int main(){
  char vDat[20], tekst[256];
  int linija, lnDat = 1;
  FILE *IN_DAT, *TEMP_DAT;

  printf("Vnesi ime na datoteka za obrabotka: ");
  scanf("%s", &vDat);

  if((IN_DAT = fopen(vDat, "r+")) == NULL){
    fprintf(stderr, "Ne mozham da ja otvaram datotekata \"%s\"\n", vDat);
    return -1;
  } else printf("Datotekata \"%s\" e uspeshno otvorena...\n", vDat);
  TEMP_DAT = fopen("Temp.txt", "w+");

  printf("Vnesi linija za otstranuvanje: ");
  scanf("%d", &linija);

  while((fgets(tekst, 256, IN_DAT)) != NULL){
    if(lnDat != linija) fputs(tekst, TEMP_DAT);
    lnDat++;
  }
  fclose(IN_DAT);
  rewind(TEMP_DAT);
  IN_DAT = fopen(vDat, "w");

  while((fgets(tekst, 256, TEMP_DAT)) != NULL){
    fputs(tekst, IN_DAT);
  }
  fclose(IN_DAT);
  fclose(TEMP_DAT);
  remove("Temp.txt");
  return 0;
}
