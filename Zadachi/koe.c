#include <stdio.h>

int main() {
  int i , j,n;
  int count = 10,k=0;
  scanf("%d", &count);
  int x[count][count];
  int y[count + (count -1)];
  for ( i = 0; i < count + (count -1); i++) y[i]=0;
  for ( i = 0; i < count; i++)for ( j = 0; j < count; j++)scanf("%d",&x[i][j]);
   for ( i = count-1; i >= 0 ; i--) {
     for ( j = 0; j < count ; j++)
       y[j+k]+=x[j][i];
     k++;
   }
   k=0;
   for (  i = count-1; i >= 0 ; i--) {
     for ( j = 0; j < count ; j++)
       x[j][i] = y[j+k];
     k++;
   }
      printf("\n");
   for ( i = 0; i < count; i++) {
     for ( j = 0 ; j < count; j++) {
       printf("%d ",x[i][j]);
     }
     printf("\n");
   }

  return 0;
}
