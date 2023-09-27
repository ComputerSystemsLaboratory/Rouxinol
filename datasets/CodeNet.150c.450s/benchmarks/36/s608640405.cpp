#include <cstdio>

using namespace std;

int main()
{
  int d;
  while(scanf("%d",&d)!=-1){
    int res = 0;
    for(int i=d;i<600;i+=d)
      res += i*i*d;
    printf("%d\n", res);
  }
  return 0;
}