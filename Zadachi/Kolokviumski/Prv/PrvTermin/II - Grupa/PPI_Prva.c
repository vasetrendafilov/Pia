#include <stdio.h>

int stepen(int x, int y){
  if (y == 0) return 1;
  return x * stepen(x, y-1);
}

const char *mesecIme(int x){
    switch (x) {
      case 1: return "Januari";
      case 2: return "Fevruari";
      case 3: return "Mart";
      case 4: return "April";
      case 5: return "Maj";
      case 6: return "Juni";
      case 7: return "Juli";
      case 8: return "Avgust";
      case 9: return "Septemvri";
      case 10: return "Oktomvri";
      case 11: return "Noemvri";
      case 12: return "Dekemvri";
      default: return 0;
    }
}

const char *praznik(int x, int y){
  if(x == 1 && y == 1) return "Nova Godina";
  else if((x == 1 || x == 2) && y == 5) return "Den Na Trudot";
  else if(x == 24 && y == 4) return "Veligden";
  else if(x == 8 && y == 9) return "Den na nezavisnost";
  else return "Ne e praznik";
}

int main(){
  int den, mesec, godina, datum;

  printf("Vnesi datum (Format: MMDDGGGG): ");
  scanf("%d", &datum);

  godina = (datum%stepen(10, 4));
  mesec = (datum/stepen(10, 6));
  den = (datum/stepen(10, 4)%stepen(10, 2));

  printf("1. %d, %s - %d Godina\n", den, mesecIme(mesec), godina);
  printf("2. %s\n", praznik(den, mesec));

  return 0;
}
