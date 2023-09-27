#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int cal(string);
string ch(int);
int main(){
  int l,i,j,len,calc,max,min,h,flag;
  string s,s1,s2,st[21];
  while(1){
    flag=0;
    cin >> s >> l;
    st[0]=s;
    if(s=="0"&&l==0) break;
    for(h=1;h<=20;h++){
      len=s.size();
      if(len<l){
	for(i=len;i<l;i++){
	  s=s+'0';
	}
      }
      s1=s;
      s2=s;
      for(i=0;i<l;i++){
	for(j=1;j<l;j++){
	  if(s1[j]>s1[j-1]) swap(s1[j],s1[j-1]);
	}
      }
      max=cal(s1);
      for(i=0;i<l;i++){
	for(j=1;j<l;j++){
	  if(s2[j]<s2[j-1]) swap(s2[j],s2[j-1]);
	}
      }
      min=cal(s2);
      calc=max-min;
      s=ch(calc);
      st[h]=s;
      if(st[h].size()==0) st[h]="0";
      for(i=0;i<h;i++){
	if(st[h]==st[i]){
	  cout << i << ' ' << st[h] << ' ' << h-i << endl;
	  flag=1;
	  break;
	}
      }
      if(flag==1) break;
    }
  }
  return 0;
}
int cal(string change){
  int len,i,ret=0,x=1;
  len=change.size();
  for(i=len-1;i>=0;i--){
    ret+=x*(change[i]-'0');
    x*=10;
  }
  return ret;
}
string ch(int calc){
  string ret,retfi;
  char retf[7];
  int len,i;
  while(calc){
    ret+=calc%10+'0';
    calc/=10;
  }
  len=ret.size();
  for(i=0;i<len;i++){
    retf[i]=ret[len-i-1];
    retfi+=retf[i];
  }
  return retfi;
}