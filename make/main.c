#include <stdlib.h>
#include <stdio.h>
#include "sqr.h"
#include "mult_acc.h"
// gcc -Os hello-world.c -o hello-world
// rm -f *.o *.s a.out
double x=9;

int main (void){
    double y;
    int z;
#ifdef OPTION2
    y=2;
#else
    x=1.4142;
#endif
    printf("Hello World \n");
    mult_set_x(1);
    z=mult_acc(2);
    z=mult_acc(4);
    printf("O quadrado de %g é %g \n",y,sqr(y));
    return 0;
}