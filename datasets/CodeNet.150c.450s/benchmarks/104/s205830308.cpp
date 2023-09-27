#include <cstdio>

using namespace std;

int line[32];
int w, n;

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main()
{
  for(int i=1;i<=32;i++) line[i] = i;
  scanf("%d%d", &w, &n);
  for(int i=0;i<n;i++){
    int a, b;
    scanf("%d,%d", &a, &b);
    swap(&line[a], &line[b]);
  }

  for(int i=1;i<=w;i++)
    printf("%d\n", line[i]);
  
  return 0;
}