#include <stdio.h>

int main(int argc, char *argv[]){
  /*argv[1] = "p.txt";
  argv[2] = "Izlezen.txt";*/

  FILE *IN_DAT, *OUT_DAT;
  int zaliha, cenaf, cenav, redBr;
  char c[50];

  if(argv[1] == NULL){
    printf("Upatstvo za koristenje: Komanda VleznaDat.txt IzleznaDat.txt");
    return -1;
  }

  if((IN_DAT = fopen(argv[1], "r")) == NULL){
    fprintf(stderr, "Ne mozham da ja otvoram datotekata \"%s\"", argv[1]);
    return -1;
  }
  if((OUT_DAT = fopen(argv[2], "w")) == NULL){
    fprintf(stderr, "Ne mozham da ja otvoram datotekata \"%s\"", argv[2]);
    return -1;
  }

  printf("Vnesi cena: ");
  scanf("%d", &cenav);

  while(!feof(IN_DAT)){
    fscanf(IN_DAT, "%d %s %d %d", &redBr, &c, &zaliha, &cenaf);
    if(cenaf > cenav) fprintf(OUT_DAT, "%s %d %d\n", c, zaliha, cenaf);
  }


  fclose(IN_DAT);
  fclose(OUT_DAT);
}
