#include<stdio.h>
#define n 5

int main (){
int num=2,i=0;

    for (i=0;i<n;num++){
    if (perfecto(num)){
        printf ("%d Este numero es perfecto\n",num);
        i++;}


    }



return 0;
}

int perfecto(int a){
int div=0,suma=0;
for (div=1;div<a;div++){
if (!(a%div))
suma=suma+div;

}
if (suma == a)
return 1;
return 0;


}
