#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int to_i(string s){
  int ret = 0;
  for(int i = 0 ; i < s.size() ; i ++)
    ret = ret * 10 + s[i] - '0';
  return ret;
}

long long return_words(string s){
  int sm=0,l=0;
  int arys[10] = {0}, aryl[10] = {0};
  for(int i = 0 ; i < s.size(); i ++){
    arys[s[i]-'0']++;aryl[s[i]-'0']++;
  }
  for(int i = 0 ; i < 10 ; i ++){
    while(arys[i]){
      sm = sm * 10 + i;
      arys[i]--;
    }
    while(aryl[9-i]){
      l = l * 10 + 9-i;
      aryl[9-i]--;
    }
  }
  return l-sm;
}

string to_s(long long n){
  string ret = "";
  while(n){
    ret += char(n%10 + '0');
    n/=10;
  }
  reverse(ret.begin(),ret.end());
  return ret;
}
int main(void){
  string n;
  int t;
  unsigned long long ary[25] = {0};
  while(cin>>n>>t,t){
  int begin,min=1e9,length;
  ary[0] = to_i(n);
  for(int i = 0 ; i < 21 ; i ++){
    while(n.size()<t)n+="0";

    ary[i+1] = return_words(n);
    n = to_s(return_words(n));
  
  }
  int ii = 1e9,jj,ai;
  bool find = false;
  for(int i = 0 ; i < 21 ; i ++){
    for(int j = i+1 ; j < 21 ; j ++){
      if(ary[i] == ary[j] && i != j){
	if(ii > i){
	  ii = i;
	  jj = j;
	  ai = ary[i];
	}
      }
    }
  }
  //  if(ary[0] == ary[1])cout<<0<<" "<<ai<<" "<<abs(ii-jj)<<endl;
  cout<<ii<<" "<<ai<<" "<<abs(ii-jj)<<endl;
  }
}