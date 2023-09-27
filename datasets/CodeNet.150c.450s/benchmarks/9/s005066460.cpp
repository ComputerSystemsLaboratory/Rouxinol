#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,h;
  string s;
  while(1){
    cin>>s;
    if(s=="-") break;
    cin>>m;
    for(int i=0;i<m;i++){
      string tmp=s;
      s="";
      cin>>h;
      for(int j=h;j<tmp.size();j++){
	s+=tmp[j];
      }
      for(int j=0;j<h;j++){
	s+=tmp[j];
      }
    }
    cout<<s<<endl;
  }
  return 0;
}

