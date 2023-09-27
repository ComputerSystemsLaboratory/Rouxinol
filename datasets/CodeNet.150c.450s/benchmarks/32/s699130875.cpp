#include<iostream>
using namespace std;
int main(){
  while(1){
    int m,n1,n2,a[200],max=0,maxn;
    cin>>m>>n1>>n2;
    if(m+n1+n2==0)break;
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=n1;i<=n2;i++){
      int b=a[i-1]-a[i];
      if(max<=b)max=b,maxn=i;
    }
    cout<<maxn<<endl;
  }
  return 0;
}