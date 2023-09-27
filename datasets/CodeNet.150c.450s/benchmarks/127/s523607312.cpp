#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string str;
    string f,b;
    set<string> set;
    cin>>str;
    set.insert(str);
    for(int j=1;j<str.size();j++){
    f=str.substr(0,j);
    b=str.substr(j);
    set.insert(b+f);
    reverse(f.begin(),f.end());
    set.insert(f+b);
    set.insert(b+f);
    reverse(b.begin(),b.end());
    set.insert(b+f);
    set.insert(f+b);
    reverse(f.begin(),f.end());
    set.insert(b+f);
    set.insert(f+b);
    }
    cout<<set.size()<<endl;
  }
  return 0;
}