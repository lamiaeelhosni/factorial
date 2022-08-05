#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    int i,f=1;
   for(i=1;i<=n;i++){
      f=f*i;
  }
  return f;
}
int main()
{
 int i,f=1,n;
 printf("entre un number ");
  scanf("%d",&n);

   for(i=1;i<=n;i++){
      f=f*i;
  }
  printf("factorial %d est %d\n",n,f);
  printf("( en foction ) factorial %d est %d",n,fact(n));
}
