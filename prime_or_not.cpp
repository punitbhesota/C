#include<stdio.h>
main()
{int a;
printf("Enter a : ");
scanf("%d",&a);
if((a%2==0)||(a%3==0)||(a%5==0)||(a%7==0))
printf("Not a Prime number");
else
printf("Prime number");
}
