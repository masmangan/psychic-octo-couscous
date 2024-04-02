#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/*
Introduction

Digital Cypher assigns to each letter of the alphabet unique number. For example:

 a  b  c  d  e  f  g  h  i  j  k  l  m
 1  2  3  4  5  6  7  8  9 10 11 12 13
 n  o  p  q  r  s  t  u  v  w  x  y  z
14 15 16 17 18 19 20 21 22 23 24 25 26

Instead of letters in encrypted word we write the corresponding number, eg. The word scout:

 s  c  o  u  t
19  3 15 21 20
Then we add to each obtained digit consecutive digits from the key. For example. In case of key equal to 1939 :

   s  c  o  u  t
  19  3 15 21 20
 + 1  9  3  9  1
 ---------------
  20 12 18 30 21
  
   m  a  s  t  e  r  p  i  e  c  e
  13  1 19 20  5 18 16  9  5  3  5
+  1  9  3  9  1  9  3  9  1  9  3
  --------------------------------
  14 10 22 29  6 27 19 18  6  12 8


*/
char *decode(const unsigned char *code, size_t n, unsigned key)
{
    // itoa on key
    // malloc size n to result
    // keys counts from k - ´0´
    // codes decoded as get(c - k)
    // codes are ´a´ is 1, ´b´ is 2 and so on...
    return NULL;
}

int main()
{
    printf("TESTE\n");
    return 0;
}