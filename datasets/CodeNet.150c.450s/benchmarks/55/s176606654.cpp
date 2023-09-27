#include <iostream>
using namespace std;

string s;

int main(){
 while(1){
  cin>>s;
  if(s=="0") break;
  int ans=0,S=s.size();
  for(int i=0;i<S;i++) ans+=s[i]-'0';
  cout<<ans<<endl;
 }
}