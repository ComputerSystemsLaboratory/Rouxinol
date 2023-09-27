#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  while(1){
    int a,b,c,n[300],max,sa,ans;
    cin>>a>>b>>c;
    if(a==0&&b==0&&c==0)break;
    for(int i=0;i<a;i++){
      cin>>n[i];
    }
    for(int i=b-1;i<=c-1;i++){
      sa=n[i]-n[i+1];
      if(i==b-1)max=sa;
      if(max<=sa){
        max=sa;
        ans=i+1;
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}