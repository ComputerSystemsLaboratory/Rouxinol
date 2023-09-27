#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int L;
int ch(string s){
  int t=0;
  for(int i=L-1,j=1;i>=0;i--,j*=10)t+=(s[i]-'0')*j;
  return t;
}
int main(){
  string a[32],b,c,z;
  while(cin>>a[0]>>L){
    if(L==0)break;
    for(int j=0;j<L-a[0].size();j++)z+='0';
    a[0]=z+a[0];
    z.clear();
    int i=0,k=1;
    while(k){
      b=a[i];
      sort(b.begin(),b.end());
      c=b;
      reverse(c.begin(),c.end());
      i++;
      for(int j=0;j<L;j++){
	int t=b[j],u=c[j];
	if(t-u<0)b[j+1]--,a[i]+=t-u+10+'0';
	else a[i]+=t-u+'0';
      }
      reverse(a[i].begin(),a[i].end());
      for(int j=0;j<i;j++)
	if(a[i]==a[j])cout<<j<<' '<<ch(a[i])<<' '<<i-j<<endl,k=0;
      if(k==0)for(int j=0;j<=i;j++)a[j].clear();
    }
  }
  return 0;
}