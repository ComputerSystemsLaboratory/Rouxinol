#include <cstdio>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;
string shuffle(string a,int h){
   string head=a.substr(0,h);
   string tail=a.substr(h,a.size()-h);
   return tail+head;
}
int main(){
  string str;
  int n,h;
  std::ios::sync_with_stdio(false);
  while(1){
    cin>>str;
    if(str=="-") break;
    cin>>n;
    for(int i=0;i<=n-1;i++){
      cin>>h;
      str=shuffle(str,h);
    }
    cout<<str<<endl;
  }
  return 0;
}