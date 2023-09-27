#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
string str_calc(string str){
  string str2=str;
  sort(str.begin(),str.end(),greater<int>());
  sort(str2.begin(),str2.end());
  int point=0;
  string ansstr="";
  char cc[str.size()];
  for(int i=str.size()-1;i>=0;i--){
    if(str[i]<str2[i]){
      str[i-1]--;
      cc[i]=(str[i]-str2[i]+10)+'0';
    }else{
      cc[i]=(str[i]-str2[i])+'0';
    }
  }
  for(int i=0;i<str.size();i++){
    ansstr.pb(cc[i]);
  }
  return ansstr;
}
bool check(string str,string str2){
  bool flag=true;
  for(int i=0;i<str.size();i++){
    if(str[i]!=str2[i]){
      flag=false;
      break;
    }
  }
  return flag;
}
int main(){
  string str;
  int n;
  while(cin>>str>>n,n){
    if(str.size()!=n){
      int num=str.size();
      reverse(str.begin(),str.end());
      for(int i=0;i<n-num;i++)
	str.pb('0');
      reverse(str.begin(),str.end());
    }
    //cout<<str<<endl;
    bool flag=false;
    for(int i=0;i<str.size();i++)
      if(str[i]!='0')
	flag=true;
    if(flag){
    vector<string>vs;
    vs.pb(str);
    int ans=-1,ans2=-1;
    for(int i=1;i<=20;i++){
      str=str_calc(str);
      for(int j=0;j<vs.size();j++){
	//cout<<str<<" "<<vs[j]<<" "<<j<<endl;
	if(check(str,vs[j])){
	  ans=j;ans2=i-j;
	  break;
	}
      }
      vs.pb(str);
      if(ans>=0)break;
    }
    reverse(str.begin(),str.end());
    while(str[str.size()-1]=='0'){
      str=str.substr(0,str.size()-1);
    }
    if(str=="")str="0";
    reverse(str.begin(),str.end());
    cout<<ans<<" "<<str<<" "<<ans2<<endl;
  }else{
      cout<<0<<" "<<str<<" "<<1<<endl;}
  }
  return 0;
}