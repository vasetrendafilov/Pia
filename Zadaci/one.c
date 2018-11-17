#include <stdio.h>
int r = 0;
int calc(int type , int x , int y) {
  switch (type)
  {
    case 1://reverseint
      if (x == 0){
        return 0;
       }
      r *= 10;
      r += x % 10;
      calc(1 , x/10 , 0);
      return r;
    case 2://power
      if (y != 0)
        return (x*calc(2, x, y-1));
      else
        return 1;
    case 3://zbir na cifri
      if (x == 0) return 0;
      r += x % 10;
      calc(3 , x/10 , 0);
      return r;
    case 4://
      if(x == 0) return 0;
      r++; calc(4,x/10,0);
      return r;
  }
}
int main ()
{
int a,b=0,d;
while(scanf ("%d", &a))
{
  a = calc(1,a,0);
   r=0;
  printf ("%d\n", a);
  while( a > 0 ){
    b*=10;
    b+=a%10;
    a/=10;
  }
}
printf ("%d\n", b);
return 0;
}
