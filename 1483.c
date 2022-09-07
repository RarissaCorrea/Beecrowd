#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double V=0, Premio;
    long long unsigned N=0, M=0;
    int i, Aux, Grup[24];
    
    Aux = 1;
    
    for(i=0;i<24;i++)
    {
        Grup[i] = Aux;
        Aux = Aux + 4;
    }
    
    scanf("%lf %llu %llu", &V, &N, &M);
    
    do 
    {   
        Premio = 0;
        if((N%10000) == (M%10000))
            Premio = V * 3000;
        else if((N%1000) == (M%1000))
            Premio = V * 500;
        else if((N%100) == (M%100))
            Premio = V * 50;
        else if(((N%100) == 00) && ((M%100) == 00))
            Premio = V * 16;
        else
        {
            for(i=0;i<24;i++)
            {
                if(((N%100) >= Grup[i]) && ((N%100) < Grup[i + 1]))
                {
                    if(((M%100) >= Grup[i]) && ((M%100) < Grup[i + 1]))
                        Premio = V * 16;
                    else if(((N%100) >= 97) && ((M%100) >= 97))
                        Premio = V * 16;
                }    
            }
        } 
        
        printf("%.2lf\n", Premio);
        scanf("%lf %llu %llu", &V, &N, &M); 
    } while((V!=0) || (N!=0) || (M!=0));
    
    return 0;
}