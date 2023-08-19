#include <stdio.h>

int main ()
{
int num, j;

    printf("dame un numero ");
    scanf("%d",& num);

    for(j=2;j<num;j++)
    {
        if(j%2!=0 && j%3!=0 && j%5!=0 || j==3 || j==2)
        {    
            printf("%d, ", j);
                
        }
    }
   
}