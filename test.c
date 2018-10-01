#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "newstr.h"

int main() {
  char s1[150] = "hello";
  char s2[150] = "whaddup";

  //Display values
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);

  //Testing length
  printf("length of hello: \n");
  printf("[Ours]: %d\n",mystrlen(s1));
  printf("[Standard]: %ld\n",strlen(s1));
  printf("\n");

  //Testing cpy
  printf("Copying the lists\n");
  printf("[Ours]: %s\n", mystrcpy(s1, s2));
  mystrcpy(s1, "hello");  //Reset the value of s1
  printf("[Standard]: %s\n", strcpy(s1, s2));
  mystrcpy(s1, "hello");
  printf("\n");

  //Testing cat
  printf("nCat-ing the lists\n");
  printf("[Ours]: %s\n", mystrncat(s1, s2, 4));
  mystrcpy(s1, "hello");
  printf("[Standard]: %s\n", strncat(s1, s2, 4));
  mystrcpy(s1, "hello");
  printf("\n");

  //Testing cmp
  char a[20] = "zap";
  char b[20] = "yip";
  char c[20] = "asdf";
  char d[20] = "asfg";
  printf("comparing a to b:\n");
  printf("[Ours]:%d\n", mystrcmp(a,b));
  printf("[Standard]:%d\n", strcmp(a,b));
  printf("comparing s1 to s2:\n");
  printf("[Ours]:%d\n", mystrcmp(s1,s2));
  printf("[Standard]:%d\n", strcmp(s1,s2));
  printf("comparing c to d:\n");
  printf("[Ours]: %d\n", mystrcmp(c,d));
  printf("\n");

  //Testing strchr
  printf("Testing strchr\n");
  printf("Ours: Finding char 'W' in \"uuuuuuWuu\": %p\n", mystrchr("uuuuuuWuu", 'W'));
  printf("Standard: Finding char 'W' in \"uuuuuuWuu\": %p\n", mystrchr("uuuuuuWuu", 'W'));
  printf("\n");
}
