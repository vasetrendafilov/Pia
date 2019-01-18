//Avtor: Nikola Stoimenov

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void zamena(char *niza, char *a, char *b, int element, int stop){
  //printf("%c ", *(niza+element));
  if(*(niza+element) == *(a)) *(niza+element) = *(b);
  //printf("%c\n", *(niza+element));
  if(element < stop) zamena(niza, a, b, element+1, stop);
}

int main(int argc, char *argv[]){
  /*argv[1] = "test.txt";
  argv[2] = "N";
  argv[3] = "n";*/

  FILE *fp, *Temp;
  char Niza[256];
  int pos, pos2;

  if(argv[1] == NULL){
    printf("Upatstvo za upotreba:\nTreta IME_DATOTEKA ZNAK ZNAK\n");
    return -1;
  }
  if((fp = fopen(argv[1], "r+")) == NULL){
    fprintf(stderr, "Ne mozham da ja otvoram datotekata %s\n", argv[1]);
    return -1;
  } else printf("Datotekata \"%s\" e uspeshno otvorena\n", argv[1]);
  Temp = fopen("Temp.txt", "w+");

  while((fgets(Niza, 256, fp)) != NULL){
    zamena(Niza, argv[2], argv[3], 0, strlen(Niza));
    fprintf(Temp, "%s", Niza);
  }

  rewind(fp);
  rewind(Temp);
  while((fgets(Niza, 256, Temp)) != NULL){
    fprintf(fp, "%s", Niza);
  }
  fclose(fp);
  fclose(Temp);
  remove("Temp.txt");
}
