#include <stdio.h>
int main ()
{
float num1,num2;
printf ("Ingrese el total de la factura ");
scanf ("%f",&num1);
printf ("\nIngrese el descuento a aplicar ");
scanf ("%f",&num2);
num2=100-num2;
num1=num1*num2/100;
printf ("\nLa factura con descuento queda en %f",num2);

return 0;
}
