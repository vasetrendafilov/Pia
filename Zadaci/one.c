#include <stdio.h>
int r = 0;//tuka e globalna postavena
int calc(int type , int x , int y) {
  switch (type)
  {
    //static int r = 0; originalno r vaka bese najaveno i raboti se logikata
    //tocno problemot e sto koga vtorpat ke se povika funkcijata r ne e 0 si prodolzuva od prehodniot pat
    //i vo rekurzijava neznam kako da go napravam da se vrati na nula pa zatoa
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
   r=0;// i posle seke koristenje ja vrakam pak na 0 za pak da mozam da ja koristam
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
