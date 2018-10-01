#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "newstr.h"

int mystrlen(char *a) {
  int l = 0;
  while (*a++) {
    l++;
  }
  return l;
}

char* mystrcpy(char *dest, char *source) {
  char * dester = dest; //pointer to traverse and store array
  while (*source) { //copies the char into the test, then moves down the array
    *dest++ = *source++;
  }
  *dest = 0; //Adds teminating null
  return dester;
}

char* mystrncat(char *dest, char *source, int n) {
  char *place = dest + mystrlen(dest); //start at the end of the string
  while(n) { //while more space, add to the string
    *place = *source;
    n--;
    place++;
    source++;
  }
  *place = '\0'; //adds terminating null
  return dest;
}

int mystrcmp(char *s1, char *s2) {
  int x = 0;
  int y = 0;
  while (s1[x] == s2[y]) { //checks each element in each string
    x++;
    y++;
    if (mystrlen(s1) == x) {
      if (mystrlen(s2) == y) {
	return 0;
      }
      else {
	return -1;
      }
    }
    if (mystrlen(s2) == y) {
      return 1;
    }
  }
  if (s1[x] > s2[y]) { //if greater value, return 1
    return 1;
  }
  if (s1[x] < s2[y]) { //if less, return -1
    return -1;
  }
}

char* mystrchr( char *s, char c) {
  while (*s++) {
    if (*s == c) {
      return s;
    }
  }
  return NULL;
}
