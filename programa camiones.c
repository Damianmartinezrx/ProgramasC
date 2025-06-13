#include <stdio.h>
#include <string.h>
#define n 8
struct fecha {
int dia;
int mes;
int anio;
};

struct viajecamion {
char patente [10];
char ciudad_origen [50];
char ciudad_destino[50];
float peso_transportado;
struct fecha fecha_viaje;
};

void cargar  (struct viajecamion[],int);
void ordenar (struct viajecamion[],int);

int main(){
struct viajecamion vec[n];
cargar (vec,n);
mirar  (vec,n);
ordenar (vec,n);
printf ("\n\n");
mirar (vec,n);

return 0;}

void cargar (struct viajecamion vec[], int l){
int i;
for (i=0;i<l;i++){
printf ("Ingresar la patente del camion: ");
fflush(stdin);
gets (vec[i].patente);
strcpy(vec[i].ciudad_origen,"CABA");
stpcpy(vec[i].ciudad_destino,"ROSARIO");
vec[i].peso_transportado= 10000 + rand()%10001;
vec[i].fecha_viaje.dia= 1+ rand()%27;
vec[i].fecha_viaje.mes= 1+ rand()%7;
vec[i].fecha_viaje.anio= 2023;

}
}

void mirar (struct viajecamion vec[], int l){
int i;
for (i=0;i<l;i++){
printf ("%s\n",vec[i].patente);
printf ("%s\n",vec[i].ciudad_origen);
printf ("%s\n",vec[i].ciudad_destino);
printf ("%f\n",vec[i].peso_transportado);
printf ("%d-%d-%d\n\n", vec[i].fecha_viaje.dia,vec[i].fecha_viaje.mes,vec[i].fecha_viaje.anio);
}}

void ordenar (struct viajecamion vec[],int l){
int i,j;
struct viajecamion aux;
for (i=0;i<l-1;i++)
    for (j=0;j<l-1-i;j++){
            if (vec[j].fecha_viaje.anio>vec[j+1].fecha_viaje.anio ||
                (vec[j].fecha_viaje.anio == vec[j+1].fecha_viaje.anio && vec[j].fecha_viaje.mes>vec[j+1].fecha_viaje.mes) ||
                (vec[j].fecha_viaje.anio == vec[j+1].fecha_viaje.anio && vec[j].fecha_viaje.mes==vec[j+1].fecha_viaje.mes && vec[j].fecha_viaje.dia>vec[j+1].fecha_viaje.dia) ||
                (vec[j].fecha_viaje.anio == vec[j+1].fecha_viaje.anio && vec[j].fecha_viaje.mes==vec[j+1].fecha_viaje.mes && vec[j].fecha_viaje.dia==vec[j+1].fecha_viaje.dia && vec[j].peso_transportado>vec[j+1].peso_transportado)
                ){
                    aux=vec[j+1];
                    vec[j+1]= vec[j];
                    vec[j]=aux;

                };


    };

}










