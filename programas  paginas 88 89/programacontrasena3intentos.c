/* Ingresar conttrase�a 23645 y 3 intentos */
#include<stdio.h>
int main (){
int num=0, i=0;
do {
printf ("Ingresar contrase�a :");
scanf ("%d",&num);
if (num !=23645)
printf ("Contrase�a incorrecta\n");
i=i+1;
}
while(i<3 && num!=23645);
if (num!=23645)
printf ("Supero los intentos de contrase�a incorrecta");



return 0;
}
