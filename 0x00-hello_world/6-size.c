#include <stdio.h>

/**
 * print size of all data types in byte(s)
 * return: allways 0
*/
int main (void)
{
    printf("Size of a char: %d byte(s)\n", sizeof(char));
    printf("Size of a int: %d byte(s)\n", sizeof(int));
    printf("Size of a long int: %d byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
    printf("Size of a float: %d byte(s)\n", sizeof(float));
    return (0);
}
