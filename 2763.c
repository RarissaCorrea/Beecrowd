#include <stdio.h>

int main() 
{
    char cpf[14];
    
    scanf("%s", cpf);
    printf("%c%c%c\n%c%c%c\n%c%c%c\n%c%c\n", cpf[0], cpf[1], cpf[2], 
                                             cpf[4], cpf[5], cpf[6],
                                             cpf[8], cpf[9], cpf[10],
                                             cpf[12], cpf[13]);

    return 0;
}
