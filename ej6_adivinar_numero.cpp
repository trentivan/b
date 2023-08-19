/*Implementar un programa que simule un juego de adivinar el número. El programa
debe generar un número aleatorio entre 1 y 100 y permitir al usuario adivinar hasta
que lo acierte. Dar pistas como "Demasiado alto" o "Demasiado bajo".*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, adv, i;
    adv= rand()%100+1;
    printf("Adivina el numero entre el 1 y 100\n");
    for(i=0;i<100 && num != adv;i++)
    {
        //fflush;
        printf("Dame un numero para adivinar\n");
        scanf("%d",& num);
        if(num != adv)
        {
            if(adv < num)
            {
                printf("El numero a adivinar es mas chico\n");
            }
            if(adv > num)
            {
                printf("el numero a adivinar es mas grande\n");
            }
        }
        else
        {
            printf("Felicidades, el numero a adivvinar es %d y tu pusiste %d. ADIVINASTE", adv, num);
            break;
        }
    
    }
    return 0;
}