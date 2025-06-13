#include <stdio.h>
int main ()
{
float num1 ,tempc,tempf,tempk;
scanf ("%f",&num1);
printf ("Si la temperatura esta en celcius");
tempf=num1*1.8+32;
tempk=num1+273;
printf ("\nEn farenheit es %f",tempf);
printf ("\nEn kelvin es %f",tempk);
printf ("\n\n\nSi la temperatura esta en farenheit");
tempc=(num1-32)/1.8;
tempk=((num1-32)*5)/9+273.15;
printf ("\nEn celcius es %f",tempc);
printf ("\nEn kelvin es %f",tempk);
printf ("\n\n\nSi la temperatura esta en kelvin");
tempc=num1-273.15;
tempf= ((num1-273.15)*1.8)+32;
printf ("\nEn celcius es %f",tempc);
printf ("\nEn farenheit es %f",tempf);


return 0;
}
