#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int max=0;
int podniza(int a[],int n,int m){
    int i;
    int j=m;
    int suma=0;
    if(n==-1)
        return max;
    if(m<=n)
        for(i=n;j>0;i--,j--)
            suma=suma+a[i];

        if(abs(suma) > max && suma)
            max=suma;
        return podniza(a,n-1,m);
}
int main()
{
    int n;
    int m;
    scanf("%d %d",&n,&m);
    int a[n];
    int i;

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        printf("%d",podniza(a,n-1,m));



    return 0;
}
