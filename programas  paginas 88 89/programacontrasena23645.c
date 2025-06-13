/* Ingresar contraseña 23645 y finalizar */

#include<stdio.h>
int main ()
{
int num=0;
do {printf ("Ingresar la contraseña ");
scanf ("%d",&num);
if (num !=23645)
printf ("Contraseña incorrecta\n");
}
while (num !=23645);


printf ("La contraseña es correcta");

return 0;
}
