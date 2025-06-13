#include<stdio.h>
#include<math.h>
int zona(int, int);
int main (){
int num_comp=0,x,y,pen=0,puntaje,punt_ganador=0,ganador=0;
printf ("Ingrese el numero de competidor ");
scanf ("%f",&num_comp);
while (num_comp >=0){


printf ("Ingrese sus coordenadas x e y ");
scanf ("%d %d",&x,&y);
puntaje=zona(x,y);
if (puntaje==0)
puntaje=50;
else{
if (puntaje==1)
puntaje=40;
else{
if (puntaje==2)
puntaje=30;


}

}
printf ("Ingrese la cantidad de penalizaciones ");
scanf ("%d",&pen);
if ( pen == 1)
puntaje=(puntaje*3)/4;
if (pen == 2)
puntaje=puntaje/2;


if (puntaje > punt_ganador){
punt_ganador=puntaje;
ganador=num_comp;
}



printf ("Ingrese el numero de competidor ");
scanf ("%d",&num_comp);


}


printf ("competidor ganador es %d ",ganador);
printf ("\nCon puntuacion de %d ",punt_ganador);



return 0;
}





int zona(int x, int y){
float dist;
dist=sqrt((x*x)+(y*y));
if (dist<=5)
return 0;
else {
if (dist <= 7.5)
return 1;
else {
if (dist <=15)
return 2;
else
return 3;
}
}
}
