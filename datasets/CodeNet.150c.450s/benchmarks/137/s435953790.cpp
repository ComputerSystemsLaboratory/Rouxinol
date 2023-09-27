#include<iostream>
#include<set>
#include<cstdio>
#include<cstring>

using namespace std;
int main(){
  int n;
  string s1,s2;
  set<string>st;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s1 >> s2;
    if(s1 == "insert"){
      st.insert(s2);
    } else {
      if(st.find(s2) != st.end()){
	cout << "yes" << endl;
      } else cout << "no" << endl;
    }
  }

  return 0;
}