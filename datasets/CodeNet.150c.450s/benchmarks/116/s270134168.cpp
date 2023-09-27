#include<cstdio>
#include<cstring>
using namespace std;
int main(){
  int n,k,a,max;
  int set[100001];
  while(1){
    scanf("%d %d",&n,&k);
  if(n==0 && k==0)break;
  max=0;
  for(int i=0;i<n;i++){
    scanf("%d",&set[i]);
  }
  for(int i=0,sum=0;i<n-k+1;i++,sum=0){
    if(set[i-1]<set[i+k-1] || i==0){
      for(int j=i,l=i+k-1;;j++,l--){
	sum += set[j]+set[l];
	if(l-j==1){
	  break;
	}else if(l==j){
	  sum-=set[j];
	  break;
	}
      }
    }
    if(max<sum || i==1){
      max=sum;
    }
  }
  printf("%d\n",max);
  }
}