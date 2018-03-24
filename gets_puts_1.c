#include <stdio.h>
int main( ) {

   char str[100];

   printf( "Enter a value 1:");
   gets( str );

   printf( "\nYou entered: ");
   puts( str );

char str2[100];
   int i;

   printf( "Enter a value 2:");
   scanf("%s %d", str2, &i);

   printf( "\nYou entered: %s %d \n", str2, i);


   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );

   return 0;
}