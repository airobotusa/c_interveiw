/* sscanf example */
#include <stdio.h>
int main ()
{
   char buffer[30]="Fresh2refresh 5 ";
   char name [20];
   int age;
   sscanf (buffer,"%s %d",name,&age);
   printf ("Name : %s \n Age : %d \n",name,age);
   return 0;
}