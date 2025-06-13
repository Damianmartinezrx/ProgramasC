#include<stdio.h>
#define n 16

void cargar (int[], int[],int );
void ordenar (int[],int[],int );
void fixture (int[],int[],int);

int main (){
int codigo [n], puntaje [n];
cargar (codigo, puntaje , n ) ;
 ordenar (codigo, puntaje, n );
 fixture (codigo, puntaje, n );




return 0;
}

void cargar (int codigo[], int puntaje[],int l ){
int i;
printf ("\n\tIngrese el codigo del equipo y sus puntajes\n\n");
for (i=0;i<l;i++){
printf ("Ingrese el codigo del equipo : ");
scanf ("%d",&codigo[i]);
printf ("Ingrese el puntaje del equipo : ");
scanf ("%d",&puntaje [i]);
printf ("\n");
}

}

void ordenar (int codigo [],int puntaje [],int l){
int i,j,auxcodigo,auxpuntaje;
for (i=0;i<l-1;i++)
for (j=0;j<l-1-i;j++)
if (puntaje [j]>puntaje [j+1]){
auxpuntaje= puntaje [j];
puntaje [j]= puntaje [j+1];
puntaje [j+1] = auxpuntaje;

auxcodigo= codigo [j];
codigo [j]=codigo [j+1];
codigo [j+1]= auxcodigo;

}

}

void fixture (int codigo [],int puntaje [], int l){
int i;
for (i=0;i<l/2;i++){
printf ("\nEl equipo %d con puntaje %d juega con el equipo %d con puntaje %d", codigo [i] , puntaje [i], codigo [l-i], puntaje [l-i]);
}




}
