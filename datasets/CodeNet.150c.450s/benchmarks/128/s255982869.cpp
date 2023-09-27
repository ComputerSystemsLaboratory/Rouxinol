#include <stdio.h>

int main(int argc, char** argv)
{
  char a[20 + 1];

  fscanf(stdin, "%s", a);

  char* p;

  for (p = a; *p != '\0'; p ++)
    ;

  for (int i = p - a; i > 0; i --)
    fputc(a[i - 1], stdout);
  
  fputc('\n', stdout);
}