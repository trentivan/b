#include <stdio.h>

int calcularPotencia(int x, int y)
{
    int tot=1, i;
    for(i=1;i<=y;i++)
    {
        tot= tot * x;
    }
    
    return tot;
}

int main()
{

    int x, y, pot;
    printf("que numero quieres multiplicar?");
    scanf("%d",& x);
    printf("a que potencia lo quieres elevar?");
    scanf("%d",& y);

    pot = calcularPotencia(x,  y);
    printf("%d", pot);
    return 0;
}