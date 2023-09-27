#include<cstdio>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
  int a[4],b[4];
  for(int i=0;i<4;i++) scanf("%d",&a[i]);
  for(int i=0;i<4;i++) scanf("%d",&b[i]);
  printf("%d\n",max(accumulate(a,a+4,0),accumulate(b,b+4,0)));
  return (0);
}