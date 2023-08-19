#include <stdio.h>
#define TASA_DESCUENTO 0.1
int main()
{
    float prod=1900, precio;

    precio= prod - (prod * TASA_DESCUENTO);
    printf(" el precio con descuento es %f", precio);
    return 0;
}