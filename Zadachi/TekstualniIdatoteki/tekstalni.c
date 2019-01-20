#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void justAlnum(char *s){
  for (size_t i = 0; i < strlen(s); i++)if(!isalnum(s[i]))s[i]=' ';
}
int repeatAlpha(char *s){
  int count=0;
  for (size_t i = 0; i < strlen(s); i++){
    for (size_t j = i+1; j < strlen(s); j++)
      if(s[i]==s[j])count++;
    if(count>=2)return 1;
  }
  return 0;
}
int main(int argc, char *argv[]){
  int a[10],i=0,m=0,red=0,br=0;
char c,s[30];
FILE *in,*out;
in = fopen("datoteka.txt","r");
out = fopen("final.txt","w");

while (! feof(in) && fgets(s,100,in)){
  justAlnum(s);
  for (char *p = strtok(s," "); p!= NULL; p = strtok(NULL," ")){
   if(repeatAlpha(p)){m++;puts(p);}
  }
}
printf("Imase %d zborovi", m);
//rewind(dat);
//fputs(c,dat);
fclose(in);
fclose(out);
return 0;
}
