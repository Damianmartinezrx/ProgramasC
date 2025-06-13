#include<stdio.h>
#define max 5
int main ()

{
int num=2,i,j,div,sum=0;
    for (i=0;i<max;i++){

        for (j=2;j<num;j++){
        div=num%j;
        if (div==0)
        sum=sum+j;
        }
        if (sum==num)
        printf ("Este numero es perfecto &d",num);

    num=num+1;








    }





return 0;
}
