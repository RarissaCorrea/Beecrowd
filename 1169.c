#include <stdio.h>
#include <math.h>

int main()
{
    int N, X;
    unsigned long long int Kg;
    
    scanf("%d", &N);
    
    for(int i=0;i<N;i++)
        {
            scanf("%d", &X);
            Kg = pow(2,X)/12000;
            printf("%llu kg\n", Kg);
        }
    
    return 0;
}
