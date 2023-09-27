#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  string s;
  vector<string> v;
  while(cin>>s) v.push_back(s);
  stack<int> st; 
  for(int i=0;i<(int)v.size();i++){
    if(v[i][0]=='+'){
      int r=st.top();st.pop();
      int l=st.top();st.pop();
      st.push(l+r);
      continue;
    }
    if(v[i][0]=='-'){
      int r=st.top();st.pop();
      int l=st.top();st.pop();
      st.push(l-r);
      continue;
    }
    if(v[i][0]=='*'){
      int r=st.top();st.pop();
      int l=st.top();st.pop();
      st.push(l*r);
      continue;
    }
    st.push(stoi(v[i]));
  }
  cout<<st.top()<<endl;
  return 0;
}