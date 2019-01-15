//Avtor: Nikola Stoimenov
//Januarski ispit 25.01.2017, Termin 3 Grupa 2, Prva zadacha...
#include <stdio.h>
#define MAX_ELEMENTI 50

int isP(int *x){
  if (*(x)>0) return 1;
  if (*(x)<0) return 0;
}

int zbir(int *Niza, int kraj){
  static int i = 0;
  static int zb = 0;
  if(i==0){
    if(isP(Niza+i) == 1 && isP(Niza+i+1) == 0) zb += *(Niza+i);
    if(isP(Niza+i) == 0 && isP(Niza+i+1) == 1) zb += *(Niza+i);
  }
  else if(i == kraj-1){
    if(isP(Niza+i) == 1 && isP(Niza+i-1) == 0) zb += *(Niza+i);
    if(isP(Niza+i) == 0 && isP(Niza+i-1) == 1) zb += *(Niza+i);
  }
  else {
    if(isP(Niza+i) && (isP(Niza+i-1) == 0 && isP(Niza+i+1) == 0)) zb += *(Niza+i);
    if(isP(Niza+i) == 0 && (isP(Niza+i-1) && isP(Niza+i+1) )) zb += *(Niza+i);
  }
  i++;
  if (i < kraj) {
    zbir(Niza, kraj);
    return zb;
  }
}

int main(){
  int niza[] = {7, -2, 2, 1, -5, 6, -2, 2};
  printf("%d", zbir(niza, 8));
}
