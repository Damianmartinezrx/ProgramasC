/* Ingresar contrase�a 23645 y finalizar */

#include<stdio.h>
int main ()
{
int num=0;
do {printf ("Ingresar la contrase�a ");
scanf ("%d",&num);
if (num !=23645)
printf ("Contrase�a incorrecta\n");
}
while (num !=23645);


printf ("La contrase�a es correcta");

return 0;
}
