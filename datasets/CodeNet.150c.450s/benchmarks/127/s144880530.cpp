#include<iostream>
#include<vector>
#include<set>
using namespace std;


string rev(string s){
  string t=s;
  for(int i=0;i<s.size();i++){
    t[i]=s[s.size()-1-i];
  }
  return t;
}

int main(){
  int n;
  cin>>n;
  for(int x=0;x<n;x++){
    string s;
    cin>>s;
    set<string> st;
    for(int i=1;i<s.size();i++){
      string a,b;
      for(int j=0;j<i;j++)a.push_back(s[j]);
      for(int j=i;j<s.size();j++)b.push_back(s[j]);
      string ra=rev(a);
      string rb=rev(b);
      st.insert(a+b);
      st.insert(ra+b);
      st.insert(a+rb);
      st.insert(ra+rb);
      st.insert(b+a);
      st.insert(b+ra);
      st.insert(rb+a);
      st.insert(rb+ra);
    }
    cout<<st.size()<<endl;
  }
  return 0;
}