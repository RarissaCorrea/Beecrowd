#include <stdio.h>

int main()
{   
    int N, X, Y;
    float  result;
    
    scanf("%d", &N);
    
    for(int i = 0;i<N;i++)
    {
        scanf("%d %d",&X,&Y);
        
        if(Y==0)
            printf("divisao impossivel\n");
        else
        {
            result=(float)X/Y;
            printf("%.1f\n", result);
        }
    
    }
    
    return 0;
}
