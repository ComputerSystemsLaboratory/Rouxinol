#include <cstdio>

int m[16];

int main()
{
  for(int i=0;i<10;i++)
    scanf("%d", m+i);

  for(int i=0;i<3;i++){
    int idx = 0;
    for(int j=0;j<10;j++)
      if(m[idx] < m[j]) idx = j;

    printf("%d\n", m[idx]);
    m[idx] =  -1;
  }
  return 0;
}