#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50] ="Have a nice day";
  char *newstring;
  //printf("Enter string :\n");
  //sscanf("%s", string);
  printf("you entered string : %s\n", string);

  char *p;
  printf ("String  \"%s\" is split into tokens[ ]:\n",string);
  p = strtok (string," ");
  while (p!= NULL)
  {
      printf ("%s\n",p);
      strcpy(newstring, p);
      printf("newstring is : %s\n", newstring);
    p = strtok (NULL, " ");  //p = strtok (NULL, ",:");
  }
  return 0;
}

/*
#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50] ="Test,string1,Test,string2:Test:string3";
  char *p;
  printf ("String  \"%s\" is split into tokens:\n",string);
  p = strtok (string,",:");
  while (p!= NULL)
  {
    printf ("%s\n",p);
    p = strtok (NULL, ",:");
  }
  return 0;
}
*/
