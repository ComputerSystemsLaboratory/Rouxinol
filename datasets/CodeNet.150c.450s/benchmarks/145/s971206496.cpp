#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string s[1000];
  int n=0;
  while(cin>>s[n]) n++;
  sort(s,s+n);
  int m,c;
  m=c=0;
  string t,ms,l;
  ms=t=s[0];
  for(int i=0;i<n+1;i++){
    if(t==s[i]) c++;
    else{
      if(c>m){
	m=c;
	ms=t;
      }
      c=1;
      t=s[i];
      if(t.length()>l.length()) l=t;
    }
  }
  cout<<ms<<" "<<l<<endl;
  return 0;
}