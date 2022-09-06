#include <stdio.h>
#include <string.h>

int main()
{
    int T, N;
    char str[101];
    
    scanf("%d", &T);
    
    for(int i = 0; i<T;i++)
    {
        scanf("%s", str);
        N = strlen(str);
        
        if(N>0 && N<=25)
            printf("Y\n");
        else
            printf("N\n");
    }
    
    return 0;
}
