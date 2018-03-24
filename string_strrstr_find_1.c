#include <stdio.h>
#include <string.h>
int main ()
{
  char string[55] ="This is a test string for testing";
  char *p;
  p = strrstr (string,"test");
  if(p)
  {
    printf("string found\n" );
    printf ("Last occurrence of string \"test\" in \"%s\" is"\
           " \"%s\"",string, p);
  }
  else printf("string not found\n" );
   return 0;
}