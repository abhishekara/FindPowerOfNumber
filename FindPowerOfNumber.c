#include<stdio.h>
#include<math.h>
int main()
{

 long int x,n,p;
 printf("Enter number :\n");
 scanf("%ld",&n);
  printf("Enter the power of number :\n");
 scanf("%ld",&x);

 p=pow(x,n);
  printf("%ld^%ld=%ld",x,n,p);
return 0;
}
 
