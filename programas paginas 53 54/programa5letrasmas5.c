#include <stdio.h>
int main ()
{
char a,b,c,d,e;
printf ("Ingrese 5 letras y se le sumara 5 al codigo ascii : ");
scanf("%c %c %c %c %c",&a, &b, &c, &d, &e);
a=a+5;
b=b+5;
c=c+5;
d=d+5;
e=e+5;
printf ("La palabra formada sumando +5 en casa letra es : %c %c %c %c %c ",a, b, c, d ,e);

return 0;
}
