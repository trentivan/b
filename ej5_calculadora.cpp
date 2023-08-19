/*Implementar una calculadora que pueda realizar operaciones de suma, resta,
multiplicación y división. El usuario debe ingresar dos números y el operador.*/
#include <stdio.h>
int main()
{
    float num1, num2, res;
    int o;

    printf("dame un numero: ");
    scanf("%f",&num1);
    printf("dame otro numero: ");
    scanf("%f",&num2);
    printf("selecciona la operacion que quieres realizar\n 1)Suma.\n2)Resta.\n3)Multiplicacion.\n4)Division.\n");
    scanf("%d",& o);

    switch(o)
    {
        case 1:
            res= num1+num2;
            printf("el resultado de la suma es: %f",res);
            break;

        case 2:
            res=num1-num2;
            printf("el resultado de la resta es: %f",res);
            break;

        case 3:    
            res=num1*num2;
            printf("el resultado de la multiplicacion es: %f",res);
            break;

        case 4:
            res=num1/num2;
            printf("el resultado de la division es: %f",res);
            break; 

        default :
            printf("Opcion incorrecta");
    }
    return 0;
}