#include<stdio.h>
#include <string.h>
#include <memory.h>

char *strings[10];

int main(int ac, char *av[]) {
    memset(strings, 0, 10 * sizeof(char *));

    for (int i = 0; i < 10; i += 1) {
        char ins[100];
        scanf("%100s", ins);

        strings[i] = malloc(strlen(ins) + 1);
        if (strings[i]) {
            strcpy(strings[i], ins);
        }
     }
  }