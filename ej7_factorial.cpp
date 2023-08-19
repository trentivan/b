#include <stdio.h>

int main()
{
    int num, fact=1, i;

    printf("Dame un numero para calcular su factorial: ");
    scanf("%d",& num);

    for( i=num; i > 0; i--)
    {
        fact= fact * i;
    }
    printf("\nel factorial es %d", fact);
    return 0;
}