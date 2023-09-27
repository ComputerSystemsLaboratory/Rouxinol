#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

set<string> s;

int main(){
  int n;
  string str,str1,str2;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str;
    for(int j=1;j<=str.size();j++){
      str1=str.substr(0,j);
      str2=str.substr(j);
    for(int k=0;k<2;k++){
    reverse(str1.begin(),str1.end());
    s.insert(str1+str2);
    s.insert(str2+str1);
    reverse(str2.begin(),str2.end());
    s.insert(str1+str2);
    s.insert(str2+str1);
    }
    }
  cout<<s.size()<<endl;
  s.clear();
  }
  return 0;
}