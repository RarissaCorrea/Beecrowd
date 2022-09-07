#include <stdio.h>

int main()
{
    long int X;
    
    scanf("%ld", &X);
    
    if(X%2==0)
        X = X + 2;
    else
        X = X + 1;
    
    printf("%ld\n", X);
    
    return 0;
}
