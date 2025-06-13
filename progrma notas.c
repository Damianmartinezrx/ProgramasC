#include <stdio.h>
#include <strings.h>
#define n 5

struct alumnos {
char nombre[10];
float notas[4];
};

void cargar     (struct alumnos[], int);
int reprobados  (struct alumnos[],int,int);
void ordenado   (struct alumnos[],int,int);

int main (){
struct alumnos vec[n];
int materia,materia2;
cargar  (vec,n);
mirar   (vec,n);
printf ("\nIngresar materia para ver los desaprobados de la misma desaprobados: ");
scanf ("%d",&materia);
materia = reprobados (vec,n,materia);
printf ("%d",materia);
printf ("\nIngresar materia a ordenar: ");
scanf ("%d",&materia);
ordenado (vec,n,materia);
mirar   (vec,n);

return 0;
}

void cargar (struct alumnos vec[], int l){
int i,j;
for (i=0;i<l;i++){
printf ("Ingresar el nombre del alumno: ");
fflush (stdin);
gets(vec[i].nombre);
for (j=0;j<4;j++)
vec[i].notas[j]= 4 + rand()%7;

}
}

void mirar (struct alumnos vec[],int l){
int i,j;
for (i=0;i<l;i++){
printf ("\n%-10s",vec[i].nombre);
for (j=0;j<4;j++)
printf ("%.1f ",vec[i].notas[j]);
}
}

int reprobados (struct alumnos vec[],int l, int m){
int i,cont=0;
for (i=0;i<l;i++){
    if (vec[i].notas[m]<7)
    cont=cont+1;
}
return cont;
}

void ordenado (struct alumnos vec[],int l, int m){
int i,j;
struct alumnos aux;
for (i=0;i<l-1;i++)
for (j=0;j<l-1-i;j++){
        if (vec[j].notas[m] < vec[j+1].notas[m]){
            aux=vec[j+1];
            vec[j+1]=vec[j];
            vec[j]=aux;
            };
            if (vec[j].notas[m] < 7 && (strcmp (vec[j].nombre,vec[j+1].nombre)>0)){
                aux=vec[j+1];
            vec[j+1]=vec[j];
            vec[j]=aux;
            };

}


}
