#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5

struct personas {
char nom[10];
int edad;
};

void cargar (struct personas[],int);
void mirar (struct personas [], int );

int main(){
struct personas vec[n] ;
cargar (vec,n);
mirar (vec,n);


return  0;
}

void cargar (struct personas vec[],int l){
char nom[][10] = {"damian","ailen","andrea","joaquin","jose" };
int edad []    =  { 33 , 27 , 29 , 6, 57} ;
int i;
    for (i=0;i<l;i++){
       strcpy(vec[i].nom,nom[i]);
       vec[i].edad = edad[i];

    }
}

void mirar (struct personas vec[], int l){
int i;
    for (i=0;i<l;i++){
    printf ("%-10s" ,vec[i].nom  );
    printf ("%d \n" ,vec[i].edad );

            }

}
