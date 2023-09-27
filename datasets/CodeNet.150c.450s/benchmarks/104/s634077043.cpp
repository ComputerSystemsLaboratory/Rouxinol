#include <cstdio>
#include <utility>
using namespace std;

int main(){
  int w,n;
  scanf("%d\n%d",&w,&n);
  int v[w+1],s1,s2;
  for(int i=1;i<=w;i++) v[i]=i;
  for(int i=0;i<n;i++){
    scanf("%d,%d",&s1,&s2);
    swap(v[s1],v[s2]);
  }
  for(int i=1;i<=w;i++) printf("%d\n",v[i]);
  return 0;
}