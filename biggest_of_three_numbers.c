#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int biggest;

    printf("Enter the three numbers\n");

    scanf("%d %d %d", &a, &b, &c);

    biggest =  ((b > c) ? ((a > b) ? a : b) : c) ;

    printf("Biggest of the three numbers is : %d\n", biggest);

    return 0;
}
