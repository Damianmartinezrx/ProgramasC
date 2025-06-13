#include<stdio.h>
#include<string.h>
#define n 4


struct persona {
char nombre[20];
int dni;
int dni_madre;
int dni_padre;
};



void cargar    (struct persona[],int);
void ordenar   (struct persona[],int);
void sin_hijos (struct persona[],int);




int main(){
struct persona vec [n];
cargar   (vec,n);
ordenar  (vec,n);
sin_hijos(vec,n);


return 0;
}


void cargar (struct persona vec[],int l){
int i;
for (i=0;i<l;i++){
printf ("Ingrese el nombre de la persona: ");
fflush(stdin);
gets(vec[i].nombre);
printf ("Ingrese el dni: ");
scanf ("%d",&vec[i].dni);
printf("Ingrese dni de su madre y luego el de su padre:");
scanf ("%d %d",&vec[i].dni_madre ,&vec[i].dni_padre);
}
}



void ordenar (struct persona vec[],int l){
int i,j;
struct persona aux;
for (i=0;i<l-1  ;i++)
for (j=0;j<l-i-1;j++)
if  (vec[j].nombre > vec[j+1].nombre){
aux= vec[j];
vec[j]= vec[j+1];
vec[j+1]=aux;
}
}




void sin_hijos (struct persona vec[], int l){
int i,j;
int flag;
    for (i=0;i<l;i++){
    flag=1;
        for (j=0;j<l;j++)
        if  ((vec[i].dni == vec[j].dni_madre) || (vec[i].dni == vec[j].dni_padre))
        flag =0;
        if (flag == 1)
printf ("%s\n",vec[i].nombre);

}



}
