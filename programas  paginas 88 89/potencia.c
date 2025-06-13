#include<stdio.h>
#define n 100000
int main ()
{
int num=1,i,div,primo=1;
for (num=1;num<n;num++){
    for (i=1;i<num;i++) {
    if (!(num%i)){
     primo+0;
    }
    }
    if (primo){
        printf ("%d es primo          ",&num);
    }
    }

return 0;
}
