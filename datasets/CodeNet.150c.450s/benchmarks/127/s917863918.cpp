#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main(){
  string sya;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    set<string> a;
    cin>>sya;
    a.insert(sya);
    for(int j=1;j<sya.size();j++){
      string b,c,a1,a2;
      for(int k=0;k<j;k++)b+=sya[k];
      for(int k=j;k<sya.size();k++)c+=sya[k];
      a.insert(c+b);
      reverse(b.begin(),b.end());
      a.insert(b+c);
      a.insert(c+b);
      reverse(c.begin(),c.end());
      a.insert(b+c);
      a.insert(c+b);
      reverse(b.begin(),b.end());
      a.insert(b+c);
      a.insert(c+b);
    }
    cout<<a.size()<<endl;
  }
  return 0;
}