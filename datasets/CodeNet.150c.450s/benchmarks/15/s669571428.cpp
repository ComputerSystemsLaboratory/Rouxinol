#include <iostream>
using namespace std;

int main(){
  int n,s[10001],q;
  cin>>n;
  for(int i=0;i<n;i++) cin>>s[i];
  cin>>q;
  int ans=0,b;
  while(q--){
    cin>>b;
    int i=0;
    while(i<n&&s[i]!=b)i++;
    ans+=(i!=n);
  }
  cout <<ans<<endl;
  return 0;
}