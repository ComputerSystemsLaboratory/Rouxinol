#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

string encode(int num){
  stringstream ss;
  int i=num/1000;
  if(i>1)ss<<i;
  if(i>0)ss<<"m";
  i=(num%1000)/100;
  if(i>1)ss<<i;
  if(i>0)ss<<"c";
  i=(num%100)/10;
  if(i>1)ss<<i;
  if(i>0)ss<<"x";
  i=num%10;
  if(i>1)ss<<i;
  if(i>0)ss<<"i";
  return ss.str();
}

int decode(string str){
  int result=0;
  int tmp=1;
  for(int i=0;i<str.size();i++){
    if('2'<=str[i]&&str[i]<='9')
      tmp=str[i]-'0';
    else{
      if(str[i]=='m')
	result+=tmp*1000;
      else if(str[i]=='c')
	result+=tmp*100;
      else if(str[i]=='x')
	result+=tmp*10;
      else if(str[i]=='i')
	result+=tmp;
      tmp=1;
    }
  }
  return result;
}

int main(){ _;
  int n;cin>>n;
  REP(i,n){
    string s1,s2;cin>>s1>>s2;
    cout<<encode(decode(s1)+decode(s2))<<endl;
  }
}