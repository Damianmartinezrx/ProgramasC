#include <stdio.h>
#include <string.h>
#define n 10

struct trabajo {
int impresora;
int hojas;
char archivo[50];
};

void cargar (struct trabajo[], int);
void mirar  (struct trabajo[], int);

int main (){
struct trabajo vec[n];
cargar      (vec,n);
mirar       (vec,n);
mirar_arch (vec,n);


return 0;
}

void cargar (struct trabajo vec[], int l){
int i;
for (i=0; i< l; i++){
vec[i].impresora= 10+ i;
vec[i].hojas= 1+ rand()%100;
printf ("Ingrese el nombre del archivo de la impresora %d :",vec[i].impresora);
fflush(stdin);
gets(vec[i].archivo);
}
}

void mirar (struct trabajo vec [], int l){
int i;
printf ("%-10s %5s\n","IMPRESORA","HOJAS");
for (i=0; i< l; i++){
printf ("%-10d %5d \n",vec[i].impresora, vec[i].hojas);
}
}

void mirar_arch (struct trabajo vec[], int l){
int i;
int posmax=0,max =0 ;

for (i=0; i<l; i++){
     if (vec[i].hojas > max)
        max= vec[i].hojas;
        posmax=i;
}

printf ("La impresora con el archivos mas largo es la impresora %s ",vec[posmax].archivo);

}
