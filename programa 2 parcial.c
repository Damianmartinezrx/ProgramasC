#include <stdio.h>
#include <string.h>
#define n 3

struct fecha {
int dia;
int mes;
int anio;
};

struct socio {
char nombre [30];
struct fecha nac;
};

void cargar  (struct socio[],int);
void mostrar (struct socio[],int);
void ordenar (struct socio[],int);

int main (){
struct socio vec[n];
cargar  (vec , n);
mostrar (vec , n);
ordenar (vec , n);
mostrar (vec , n);



return 0;
}

void cargar (struct socio vec[],int l){
    int i ;
    for (i=0;i<l;i++){
        printf ("Ingrese el nombre del socio: ");
        fflush(stdin);
        gets (vec[i].nombre);
        printf ("Ingrese la fecha de nacimiento");
        scanf ("%d %d %d",&vec[i].nac.dia, &vec[i].nac.mes, &vec[i].nac.anio);

    };
}

void mostrar (struct socio vec[], int l){
int i;
printf ("%-30s %s \n", "NOMBRES DEL SOCIO" , "FECHA NACIMIENTO" );
for (i=0; i<l ; i++){
    printf ("%-30s %d - %d - %d\n",vec[i].nombre, vec[i].nac.dia,vec[i].nac.mes,vec[i].nac.anio);
};

}

void ordenar (struct socio vec [] , int l){
int i, j;
struct socio aux ;
for (i=0;i<l-1;i++)
for (j=0;j<l-1-i;j++){
        if (vec[j].nac.anio < vec[j+1].nac.anio){
            aux=vec[j+1];
            vec[j+1]=vec[j];
            vec[j]=aux;
        }


};
}
