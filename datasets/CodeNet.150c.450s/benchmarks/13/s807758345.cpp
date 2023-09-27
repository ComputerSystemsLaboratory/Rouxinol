#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
  char ring[202], cp[101], search[101];
  scanf("%s %s", ring, search);
  strcpy(cp, ring);
  strcat(ring, cp);
  if (strstr(ring, search)) printf("Yes\n");
  else printf("No\n");
  return 0;
}