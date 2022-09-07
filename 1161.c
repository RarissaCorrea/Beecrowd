#include <stdio.h>

int main()
{
    long long int N, M, FatN, FatM;
    
    
    while(scanf("%lld %lld", &N, &M) != EOF)
    {
        for(FatN = 1; N > 1; N = N - 1)
        {      
          FatN = FatN * N;
        }
        for(FatM = 1; M > 1; M = M - 1)
        {      
          FatM = FatM * M;
        }
        printf("%lld\n", FatN + FatM);
    }
    
    
    return 0;
}
