#include <cstdio>
#include <cstring>

using namespace std;

void swap(char *a, char *b){
  char tmp = *a;
  *a = *b;
  *b = tmp;
}

int main()
{
  char str[32];
  scanf("%s", str);
  int len = strlen(str);
  for(int i=0;i<len/2;i++)
    swap(&str[i], &str[len-i-1]);

  puts(str);
  return 0;
}