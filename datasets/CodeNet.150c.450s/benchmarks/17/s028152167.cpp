#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
  int a[5],i,j,min,min_n;

  for(i=0;i<5;i++)
    scanf("%d",&a[i]);

  for(i=0;i<5;i++){
    min=a[i]; min_n=i;
    for(j=i+1;j<5;j++){
      if(min<a[j]){
        min=a[j]; min_n=j;
      }
    }
  swap(a[i],a[min_n]);
  printf( i<4 ? "%d " : "%d\n",a[i]);
  }
  return 0;
}