#include <stdio.h>
int primo (int);
float potencia (float);
float euclides (float);
float perfecto(float);

int main(){
    int num;
float num2;
for (num=2;num<100;num++){
if (primo(num)){

num2=euclides(num);

if (perfecto(num2))
printf ("\n%d es primo, ",num);
printf ("%d es el numero perfecto",num2);

}

}
return 0;
}

int primo (int a){
int div;

if (a==2)
return 1;
for (div=2;div<a;div++){
if (!(a%div))
return 0;

}
return 1;

}

float potencia (float num){
float pot=1,i;
for (i=0;i<num;i++){
pot=pot*2;
}
return pot;}



float euclides (float p){
int m;

m=((potencia(p-1))*(potencia(p)-1));
return m;
}

float perfecto(float a){
float div,suma=0;
for (div=1;div<a;div++){
if (!(a%div)){
suma=suma+div;
}

}
if (a == suma)
return 1;
return 0;

}


