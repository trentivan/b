#include <stdio.h>

int main ()
{

    int  i, j, aux;
    float calif[10], prom, prom1;

    for(i=0 ;i<10 ; i++)
    {
        printf("Dame la calificacion: ");
        scanf("%f",& calif[i]);
    }
    for(i=0; i<=9; i++)
    {
        prom= prom+calif[i];
    }
    prom1= prom/10;
    printf("\nEl promedio es: %f\n", prom1);


    for(i=0;i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {

        
            if(calif[i] < calif[j])
            {
                aux= calif[i];
                calif[i]= calif[j];
                calif[j]= aux;

            }
        }
        printf(" %d [%.f], ",i,calif[i]);
    }
    
    return 0;
}