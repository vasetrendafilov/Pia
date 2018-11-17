#include <stdio.h>
#include <math.h>

int calc(int type , int x , int y) {
  switch (type)
  {
    case 1://reverseint
      if (y == 1) return x;
      return (((x % 10) * calc(2,10, y - 1)) + calc(1, x / 10, --y));
    case 2://power
      if (y != 0) return (x*calc(2, x, y-1));
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
 printf("%d\n",calc(5,a,2));
}

return 0;
}
