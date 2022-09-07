#include <stdio.h>

int main()
{
    int D, Pontos;
    
    scanf("%d", &D);
    
    if(D<=800)
        Pontos = 1;
    else if(D >800 && D<=1400)
        Pontos = 2;
    else if(D >1400 && D<=2000)
        Pontos = 3;
        
    printf("%d\n", Pontos);
    
    return 0;
}
