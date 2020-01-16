#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int biggest;

    printf("Enter the three unsigned numbers\n");

    scanf("%u %u %u", &a, &b, &c);

    biggest =  ((b > c) ? ((a > b) ? a : b) : c) ;

    printf("Biggest of the three numbers is : %u\n", biggest);

    return 0;
}
