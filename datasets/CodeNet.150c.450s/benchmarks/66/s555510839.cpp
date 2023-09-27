#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s[300];
  while(cin>>n&&n){
    for(int i=0;i<n;i++) cin>>s[i];
    int m;
    cin>>m;
    bool p=0,np=0;
    while(m--){
      string str;
      cin>>str;
      for(int i=0;i<n;i++)
	if(str==s[i]){
	  np=!np;
	  break;
	}
      if(p==np) cout<<"Unknown "<<str<<endl;
      else if(np) {cout<<"Opened by "<<str<<endl;p=np;}
      else {cout<<"Closed by "<<str<<endl;p=np;}
    }
  }
  return 0;
}