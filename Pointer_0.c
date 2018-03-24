#include<stdio.h>
#include <stdbool.h>
main()
{
bool bool_1 = true;
//bool bool_1 = false;

printf("** bool_1 is %d\n", bool_1);
if (bool_1 ){
int *p = 15;

 printf("%d",*p);  // run time error
 printf("After int *p = 15; print p is %d \n",p);
 printf("After int *p = 15; print &p is %p",&p);
 }else {
   int p = 15;
   printf("After int p = 15; print p is %d \n",p);
   printf("After int p = 15; print &p is %p",&p);
    }

}
