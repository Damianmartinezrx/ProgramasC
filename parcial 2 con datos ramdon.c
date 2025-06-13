#include <stdio.h>
#include <string.h>
#define n 10


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
categoria(vec, n);

return 0;
}

void cargar (struct socio vec[],int l){
    int i ;
    for (i=0;i<l;i++){
        printf ("Ingrese el nombre del socio: ");
        fflush(stdin);
        gets (vec[i].nombre);
       vec[i].nac.dia= rand()%29;
       vec[i].nac.mes= 1 + rand ()%12;
       vec[i].nac.anio=1980 + rand ()%30;

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

void categoria(struct socio vec[], int l){
    int i,j,k;
     printf ("\n%s","CATEGORIA A");
    for (i=0; i<l;i++){
    if (vec[i].nac.anio >= 2001)
        printf ("\n%s",vec[i].nombre);
    }
    printf ("\n%s","CATEGORIA B");
    for (j=0;j<l;j++){
        if (vec[j].nac.anio <=2000 && vec[j].nac.anio >= 1991)
            printf ("\n%s", vec[j].nombre);
    };
    printf ("\n%s","CATEGORIA c");
    for (k=0;k<l;k++){
        if (vec[k].nac.anio <= 1990 )
            printf ("\n%s", vec[k].nombre);
    };




}
