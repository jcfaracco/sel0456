#include "mult_acc.h"

static int x=2; //local para esse módulo

void mult_set_x(int x){
    x=x;
}
int mult_acc(int y){
    x+=x*y;
    return x;
}