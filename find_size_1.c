#include <stdio.h>
int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    unsigned unsignedType;
    signed signedType;

    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld byte\n",sizeof(charType));
    printf("Size of unsigned: %ld byte\n",sizeof(unsignedType));
    printf("Size of signed: %ld byte\n",sizeof(signedType));

    return 0;
}