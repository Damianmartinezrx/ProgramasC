#include <stdio.h>
#include <math.h>
int main ()
{
float area,diametro,pi=3.1416;
printf ("Ingrese la superficie del circulo  ");
scanf ("%f",&area);
diametro = sqrt ((area/pi));
diametro=diametro*2;
printf ("\nEl diametro del circulo es %f",diametro);



return 0;
}
