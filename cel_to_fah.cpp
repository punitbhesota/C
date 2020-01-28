#include<stdio.h>
main()
{int a;
float c,f;
printf("1. Celsius to fahrenheit \n");
printf("2. Fahrenheit to celsius\n");
scanf("%d",&a);
if (a==1)
{ printf("Enter temperature in celcius : ");
scanf("%f",&c);  
f = c * 9/5+32;
printf("temperature in fahrenheit : %f ",f);
}
else if (a==2)
{printf("Enter temperature in fahrenheit : ");
scanf("%f",&f);  
c = (f-32)*5/9;
printf("temperature in celcius : %f",c);
}
else 
printf("error");
}
