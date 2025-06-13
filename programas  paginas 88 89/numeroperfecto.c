
#include <stdio.h>
int main ()
{
int num, sum=0,div,i;
printf ("Ingrese un numero para saber si es perfecto :");
scanf ("%d",&num);
for (i=1;i<num;i++){
div=num%i;
if (div==0)
sum=sum+i;
}
if (sum==num)
printf ("Este numero es perfecto");
else
printf ("Este numero no es perfecto");








return 0;
}
