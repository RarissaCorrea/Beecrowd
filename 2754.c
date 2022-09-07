#include <stdio.h>

int main()
{
    double C, D;
    
    C = 234.345;
    D = 45.698;
    
    printf("%lf - %lf\n", C, D);
    printf("%.0lf - %.0lf\n", C, D);
    printf("%.1lf - %.1lf\n", C, D);
    printf("%.2lf - %.2lf\n", C, D);
    printf("%.3lf - %.3lf\n", C, D);
    printf("%e - %e\n", C, D);
    printf("%E - %E\n", C, D);
    printf("%.3lf - %.3lf\n", C, D);
    printf("%.3lf - %.3lf\n", C, D);
    
    return 0;
}
