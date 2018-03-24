#include <stdio.h>

int main()

{

     int c, n, first, last, mid, search, a[250];

     printf("Please enter number of elements\n");

     scanf("%d",&n);

     printf("Enter the elements one by one\n", n);

     for ( c = 0 ; c < n ; c++ )
     {
          scanf("%d",&a[c]);
     }

     printf("Enter the element to be searched\n");

     scanf("%d",&search);

     first = 0;

     last = n - 1;

     mid = (first+last)/2;

     while( first <= last )
     {
           if ( a[mid] < search )
          {
               first = mid + 1;
          }
          else if ( a[mid] == search )
         {
               printf("%d is found at the location %d.\n", search, mid+1);
               break;
         }
         else
         {
              last = mid - 1;
         }

         mid = (first + last)/2;
     }
     if ( first > last )
         printf("Element %d is not found in the list\n", search);
     return 0;
}