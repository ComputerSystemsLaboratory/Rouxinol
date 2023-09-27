#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,s[100],ave,flag1,flag2;
  bool a,b;
  while(cin >>n && n!=0){
    a=false;b=false;
    flag1=0;flag2=0;
    ave=0;
    for(int i=0;i<n;i++) cin >>s[i];
    sort(s,s+n);

    if(s[0]==s[1]){
      a=true;
    for(int i=1;i<n;i++){
      if(s[0]==s[i]){
	flag1++;
	s[i]=0;}
      else break;
    }
    }
    else if(s[0]==s[1])
    if(s[n-1]==s[n-2]){
	b=true;
    for(int i=n-2;i>=0;i--){
      if(s[n-1]==s[i]){
	flag2++;
	s[i]=0;}
      else  break;
    }
    }

  for(int i=1;i<n-1;i++) ave+=s[i];
  if(a==true){
    n-=flag1;
    ave+=s[0];}
    else n-=1;
  if(b==true){
    n-=flag2;
    ave+=s[n-1];}
    else n-=1;
    ave/=n;
    cout <<ave<<endl;
  }
}