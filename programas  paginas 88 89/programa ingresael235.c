/* Ingresar numeros enteros hasta que se ingrese el numero 235,
indicar cuantas veces se ingreso el numero 23 */

#include<stdio.h>
int main (){
int num=0, cont=0;
while (num !=235){
printf ("Ingresar un numero :");
scanf ("%d",&num);
if (num==23)
cont=cont+1;

}
printf ("El numero 23 se ingreso un total de veces %d",cont);








return 0;
}
