#include <stdio.h>
/* function to generate and return random numbers */
int * getRandom( ) {
   static int  r[10];
   int i;
   /* set the seed */
   srand( (unsigned)time( NULL ) );
   for ( i = 0; i < 13; ++i) {
      r[i] = rand();
      printf( "r[%d] = %d\n", i, r[i]);
   }
   return r;
}
/* main function to call above defined function */
int main () {
    printf("** Return array from function in C\n file name:<array_return_func_random_num_1.c>\n");
   /* a pointer to an int */
   int *p;

   p = getRandom();
   for (int i = 0; i < 15; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }
   return 0;
}