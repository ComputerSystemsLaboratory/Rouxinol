#include<iostream>
#define N 10000
using namespace std;
int n,d[N],q,s,ans,f;

int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>d[i];
  cin>>q;
  while(q--){
    cin>>s;
    f=0;
    for(int i=0;i<n;i++)
      if(d[i]==s)f=1;
    if(f)ans++;
  }
  cout<<ans<<endl;
  return 0;
}