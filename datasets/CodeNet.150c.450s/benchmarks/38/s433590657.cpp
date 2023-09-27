#include <cstdio>
#include <algorithm>

#define SQ(x) ((x)*(x))

using namespace std;

int a[3];

int main()
{
  int n;
  scanf("%d", &n);
  while(n--){
    for(int i=0;i<3;i++)
      scanf("%d", a+i);

    sort(a, a+3);
    puts(SQ(a[0])+SQ(a[1]) == SQ(a[2])?"YES":"NO");
  }
  return 0;
}