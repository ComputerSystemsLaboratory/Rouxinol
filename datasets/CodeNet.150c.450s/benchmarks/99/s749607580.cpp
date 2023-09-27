#include<iostream>
using namespace std;
int main(){
  string s,t,m="mcxi";
  int n,a,b,c,i,j,k;cin>>n;
  for(i=0;i<n;i++){
    cin>>s>>t;
    a=b=0;
    for(j=0;j<s.size();j++)
      if('9'<s[j]){
	for(k=3,c=1;k>=0;k--){
	  if(s[j]==m[k])break;
	  c*=10;}
	if(j==0||'9'<s[j-1])a+=c;
	else a+=c*(s[j-1]-'0');
      }
    for(j=0;j<t.size();j++)
      if('9'<t[j]){
	for(k=3,c=1;k>=0;k--){
	  if(t[j]==m[k])break;
	  c*=10;}
	if(j==0||'9'<t[j-1])b+=c;
	else b+=c*(t[j-1]-'0');
      }
    c=a+b;
    for(j=0,a=1000;j<4;j++){
      b=c/a,c%=a,a/=10;
      if(b==1)cout<<m[j];
      else if(b>1)cout<<b<<m[j];
    }cout<<endl;
  }
  return 0;
}