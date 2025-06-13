#include <stdio.h>
int potencia (int);



int main(){
int num=3,num2=0;
num2=potencia(num);
printf ("\n %d ",num2);








return 0;
}





int potencia (int num){
int pot=1,i;
for (i=0;i<num;i++){
pot=pot*2;
}
return pot;}
