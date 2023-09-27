#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
typedef unsigned int uint;
using namespace std;

int main(){
  int m;
  cin>>m;
  for(int i=0;i<m;i++){
    string str;
    set<string> s;
    cin>>str;
    s.insert(str);
    for(int j=0;j<(int)str.size()-1;j++){
      string s1=str.substr(0,j+1);
      string s2=str.substr(j+1);
      string s1r=s1;
      string s2r=s2;
      reverse(s1r.begin(),s1r.end());
      reverse(s2r.begin(),s2r.end());
      s.insert(s1+s2r);
      s.insert(s1r+s2);
      s.insert(s1r+s2r);
      s.insert(s2+s1);
      s.insert(s2r+s1);
      s.insert(s2+s1r);
      s.insert(s2r+s1r);
    }
    cout<<s.size()<<endl;

  }

  return 0;
}