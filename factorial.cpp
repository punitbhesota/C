#include<stdio.h>
main()
{int n,fact,i;
printf("Enter n : ");
scanf("%d",&n);
fact = 1;
for(i=n;i>=1;i--)
{ fact = fact*i;
}
printf("factorial : %d",fact);
}
