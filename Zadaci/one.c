#include <stdio.h>

int calc(int type , int x , int y) {
  switch (type)
  {
    case 1://reverseint
      if (x == 0) return 0;
      return ((x % 10) * calc(2, 10, calc(4,x,0) - 1)) + calc(1, x / 10, 0);
    case 2://power
      if (y != 0) return (x*calc(2, 123x, y-1));
      else return 1;
    case 3://zbir na cifri
      if (x == 0) return 0;
      return x % 10 + calc(3 , x/10 , 0);
    case 4://br na cifri
      if(x == 0) return 0;
      return 1 + calc(4,x/10,0);
    case 5://broj vo cifra
       return (x / calc(2,10,y-1)) % 10;
  }
}
int main ()
{
int a,b=0,d;
while(scanf ("%d", &a))
{
 printf("%d\n",calc(1,a,0));
}

return 0;
}
