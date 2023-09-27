#include <iostream>
using namespace std;
string s;
int main(){
 while(cin>>s){
  if(s=="0") break;
  int c=0;
  for(int i=0;i<s.size();i++) c+=s[i]-'0';
  cout<<c<<endl;
 }
}