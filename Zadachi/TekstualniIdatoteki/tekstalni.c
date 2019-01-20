#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
  int a[10],i=0,m=0,red=0,br=0;
char c[100];
FILE *in,*out;
in = fopen("datoteka.txt","r");
out = fopen("final.txt","w");
while (!feof(in) && fgets(c,100,in)){
  c[strlen(c)-1]='\0';
  fputs(c,out);
  for (i = 0; i < strlen(c); i++) {
    switch(c[i]){
    case '0':fputs("-nula",out);break;
    case '1':fputs("-eden",out);break;
    case '2':fputs("-dva",out);break;
    case '3':fputs("-tri",out);break;
    case '4':fputs("-cetiri",out);break;
    case '5':fputs("-pet",out);break;
    case '6':fputs("-sest",out);break;
    case '7':fputs("-sedum",out);break;
    case '8':fputs("-osum",out);break;
    case '9':fputs("-devet",out);break;
    default: break;
    }
  }
  fputc('\n',out);
}

//rewind(dat);
//fputs(c,dat);
fclose(in);
fclose(out);
return 0;
}
