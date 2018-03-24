#include <stdio.h>
#include <math.h>
int main()
{
   float num, root, power;
   printf("Enter a number for sqrt(), pow(): ");
   scanf("%f", &num);
   // Computes the square root of num and stores in root.
   root = sqrt(num);
   power = pow(num, num);
   printf("Square root of %.2f = %.2f", num, root);
   printf("Power of %.2f = %.2f", num, power);

   return 0;
}