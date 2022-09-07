#include <stdio.h>

int main()
{
    int X, Y, Soma;
    Soma=0;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    
    int i=X;
    
    if(X<Y)
    {
        for(i=X; i<=Y; i++)
        {
            if(i%13!=0)
                Soma = Soma + i;
        }
    }
    else
    {
            for(i=Y; i<=X; i++)
        {
            if(i%13!=0)
                Soma = Soma + i;
        }
    }
    
    printf("%d\n", Soma);
    
    return 0;
}
