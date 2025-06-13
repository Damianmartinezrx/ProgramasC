#include <stdio.h>
int main ()
{
float radio = 0 , perimetro =0 , area =0;
float pi=3.1416;
printf ("Ingrese el radio del circulo ");
scanf ("%f",&radio);
perimetro = 2*radio*pi ;
area = pi * radio * radio;
printf ("\nLa longitud de la circunferencia es %f",perimetro);
printf ("\nLa superficie del circulo es %f",area);


return 0;
}
