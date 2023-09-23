#include <algorithm>
#include <cstdio>

using namespace std;

int main(void){
  int a[3];

  scanf("%d%d%d",&a[0],&a[1],&a[2]);
  sort(a,a+3);
  printf("%d %d %d\n",a[0],a[1],a[2]);
}