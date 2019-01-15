/*
Zadaca za vezbanje kolokviumska:
TEZINA: **(*****)
Od standarden vlez se vnesuvaat celi broevi A,B,M
Da se ispechati zbirot na  prosti broevi koi se naogjaat vo opseg [A,B]. Taka sto dopolnitelno da se ispechati DA ili NE
dokolku zbirot ima poveke deliteli od M.

Avtor na zadaca: Viktor Jovev (FINKI)

TEST SLUCAEVI:

INPUT: 4 10 3
OUTPUT: 12 DA

INPUT: 32 41 9
OUTPUT: 78 NE

INPUT: 100 120 5
OUTPUT: 533 NE

*/

#include <stdio.h>

int main()
{
   int A,B,M;// INPUT
   int deliteli; //INTERFACE
   int sum=0; // OUTPUT
   scanf("%d %d %d",&A,&B,&M);

   for(; A<=B; A++)
   {

       int flag=0; // A e prost broj
       for(int i=2; i<=A/2; i++)
          if(!(A%i)){ flag=1; break;} // flag= 1 , znaci A ne e prost broj

         sum+=(!flag)? A : 0;
    }
    printf("%d ",sum);

    deliteli=2; //sekoj broj ima minimum 2 deliteli
     for(int i=2; i<=sum/2; deliteli= (!(sum%i)) ? deliteli+1 : deliteli, i++);

     printf((deliteli>M)?"DA":"NE");

    return 0;
}
