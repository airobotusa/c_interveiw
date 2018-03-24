#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {

   char word1[20], word2[20],word3[20],word4[20], dtm[100];

    scanf
   strcpy( dtm, "Have a good day" );
   printf("Org string is : %s\n", dtm);
   sscanf( dtm, "%s %s %s  %s", word1, word2, word3, word4 );

   printf("Rever order is ==> %s %s %s %s \n", word4, word3, word2, word1 );
}

/*
    char str2 = "Have a good day";

    char *word1[] = "Have a good day";
  printf("word1 = %s\n", word1);
    char *word2[] = "";
    printf("word2 = %s\n", word2);
    for (int i = 3; i < 0; i--){
        sscanf(word1[i], "%s", word2[i]);
        //printf("word2 is => %s", word2[i]);
        sscanf(word1, "%s", word2);
        printf("word2 is => %s", word2);
    }
}
*/
   /*
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main () {

   int day, year;
   char weekday[20], month[20], dtm[100];

   strcpy( dtm, "Saturday March 25 1989" );

   sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

   printf("%s %d, %d = %s\n", month, day, year, weekday );
   return(0);
}
*/
