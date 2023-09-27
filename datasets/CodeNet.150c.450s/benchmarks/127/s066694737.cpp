// 1142_OrganizeYourTrainpartII.cpp
//
#include <bits/stdc++.h>
using namespace std;
void solve(string s) {
  int len=s.length();
  set<string> st;
  for(int i=1;i<=len-1;++i){
    string a=s.substr(0,i);
    string b=s.substr(i,len-i);

    st.insert(a+b);
    st.insert(b+a);

    reverse(b.begin(),b.end());

    st.insert(a+b);
    st.insert(b+a);

    reverse(a.begin(),a.end());

    st.insert(a+b);
    st.insert(b+a);

    reverse(b.begin(),b.end());

    st.insert(a+b);
    st.insert(b+a);
  }
  cout<<st.size()<<endl;
}
int main() {
  int n;
  string s;
  cin>>n;
  for(int i=0;i<n;++i){
    cin>>s;
    solve(s);
  }
  return 0;
}

