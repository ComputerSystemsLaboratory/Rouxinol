#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;
string palindrome(string s){
  for(int i=0;i<s.length()/2;i++) swap(s[i],s[s.length()-i-1]);
  return s;
}
int main(void){
  int n,i;
  string s,t1,t2,t3,t4;
  set<string> st;
  cin>>n;
  while(n--){
    cin>>s;
    st.clear();
    for(i=1;i<s.length();i++){
      t1=s.substr(0,i);
      t2=s.substr(i,s.length()-i);
      t3=palindrome(t1);
      t4=palindrome(t2);
      st.insert(t1+t2);
      st.insert(t1+t4);
      st.insert(t2+t1);
      st.insert(t4+t1);
      st.insert(t3+t2);
      st.insert(t3+t4);
      st.insert(t2+t3);
      st.insert(t4+t3);
    }
    cout<<st.size()<<endl;
  }
  return 0;
}