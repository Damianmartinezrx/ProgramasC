#include<stdio.h>
float ver (float ,int ,int,int);
float costo (float,int,int, int);
int main(){
float peso;
int alto,ancho,prof,costo_envio;
printf ("Ingrese el peso del producto ");
scanf ("%f",&peso);
printf ("\nIngrese la altura del producto ");
scanf ("%d",&alto);
printf ("\nIngrese el ancho del producto ");
scanf ("%d",&ancho);
printf ("\nIngrese la profundidad del producto ");
scanf ("%d",&prof);
if (ver(peso,alto,ancho,prof)){
costo_envio= costo(peso,alto,ancho,prof);
printf ("\nEl costo del envio es %d",costo_envio);
}
else
printf ("\nEl producto supera el peso o/y tamano");


return 0;
}

float ver (float peso,int alto,int ancho,int prof){
if (peso <=20 && alto <=100 && ancho<=100 && prof <=100)
return 1;
return 0;
}
float costo (float peso, int alto,int ancho, int prof){
int suma=80;
if ( peso >5 ){
peso=peso-5;
suma=(peso*40)+suma;
}
if (alto>50 || ancho>50 || prof>50  )
suma=suma*1.3;



return suma;

}
