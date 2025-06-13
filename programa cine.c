#include<stdio.h>
#include <string.h>
#define n 4

struct sala {
int codigo;
int butaca[4][6];
char peli [30];

};
void cargar (struct sala [], int);
void mirar (struct sala [], int);
int mas_vista (struct sala [], int);
int buscar_peli (struct sala [], int,char[]);


int main(){
struct sala vec[n];
int codigo;
char titulo[30];
cargar (vec,n);
codigo= mas_vista(vec , n);
mirar(vec,n);
printf ("\n\nLa pelicula mas vista tiene el codigo %d",codigo);
printf ("\nIngrese la pelicula para buscar el codigo de la sala ");
fflush(stdin);
gets (titulo);

if (titulo != -1)
printf ("\n\nLa Pelicula que busca tien codido %s",titulo);
else
printf ("La pelicula que busca no esta disponible ");


return 0;

}




void cargar (struct sala vec [], int l){
int i,j,k;

for (i=0;i<l;i++){
    vec[i].codigo=i+1;
    for (j=0;j<4;j++)
        for(k=0;k<6;k++)
            vec[i].butaca[j][k]= rand()%2;


    printf ("Ingresar el nombre de la pelicula :");
    fflush(stdin);
    gets(vec[i].peli);

}

}

void mirar (struct sala vec [],int l){
int i,j,k;
for (i=0;i<l;i++){
printf ("\nEL codigo de la peli es %d\n",vec[i].codigo);
puts(vec[i].peli);
for (j=0;j<4;j++){
    for (k=0;k<6;k++)
        printf ("%3d",vec[i].butaca[j][k]);
printf ("\n");
}

}
}

int mas_vista (struct sala vec[],int l){
int i,j,k,cont=0,cont2=0,cod=0;

for (i=0;i<l;i++){
        cont=0;
    for (j=0;j<4;j++)
        for (k=0;k<6;k++){
            if (vec[i].butaca[j][k] == 1)
            cont=cont+1;
}
if (cont>cont2){
cont2=cont;
cod= vec[i].codigo ;
}
}

return cod;

}

int buscar_peli (struct sala vec [], int l,char titulo[]){
int i;
int cod;
for (i=0;i<l;i++){
if(!strcmp(titulo,vec[i].peli))
cod=vec[i].codigo;

 return cod;
}
return -1;



}











