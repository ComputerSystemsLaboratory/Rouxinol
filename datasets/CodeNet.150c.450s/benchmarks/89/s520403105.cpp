#include<iostream>
using namespace std;
#define MAX 2000000
bool isP[MAX];
int main(){
  for(int i=2;i<MAX;i++)isP[i]=true;
  for(int i=2;i*i<MAX;i++)
    if(isP[i])for(int j=i*i;j<MAX;j+=i)isP[j]=false;
  while(1){
    int a,b,n,cnt=0;
    cin>>a>>b>>n;
    if(a==0&&b==0&&n==0)break;
    while(cnt<n){
      cnt+=isP[a];
      a+=b;
    }
    cout<<a-b<<endl;
  }
  return 0;
}