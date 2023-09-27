#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
  int n;
  string a,b;
  set<string> st;
  cin>>n;
  while(n--){
    cin>>a>>b;
    if(a=="insert")st.insert(b);
    if(a=="find"){
      if(st.find(b)==st.end())cout<<"no"<<endl;
      else cout<<"yes"<<endl;
    }
  }
  return 0;
}