/* ingresar numero entereas positivos. cuantos son pares y finaliza con un numero negativo */
#include<stdio.h>
int main()
{int num=0,par=0,div;
    do
    {printf ("Ingresar un numero :");
    scanf ("%d",&num);
    div= num % 2;
        if (div == 0  && num>0){
            par=par+1;
        }
    }
        while (num >=0);


printf ("La cantidad de numeros par son %d",par);











return 0;
}
