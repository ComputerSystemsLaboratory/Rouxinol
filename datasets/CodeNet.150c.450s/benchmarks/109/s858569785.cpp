#include <iostream>
#include <algorithm>
#include <string>
#define N 10000
using namespace std;
int Change(string);
int Change_sup(string);
struct data{
  int s,g;
  bool operator<(const data & right)const{
    if(s!=right.s) return s<right.s;
    return g<right.g;
  }
};
int main(){
  int n,flag[N],com,cnt,i,j;
  string ins,ing;
  struct data d[N];
  while(1){
    cin >> n;
    if(n==0) break;
    for(i=0;i<n;i++){
      cin >> ins >> ing;
      d[i].s=Change(ins);
      d[i].g=Change(ing);
      flag[i]=0;
    }
    sort(d,d+n);
    cnt=0;
    for(i=0;i<n;i++){
      if(flag[i]==0){
	flag[i]=1;
	cnt++;
	com=d[i].g;
	for(j=i+1;j<n;j++){
	  if(com<=d[j].s&&flag[j]==0){
	    flag[j]=1;
	    com=d[j].g;
	  }
	}
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
int Change(string str){
  int r;
  string a,b,c;
  a=str.substr(0,2);
  b=str.substr(3,2);
  c=str.substr(6,2);
  r=Change_sup(a+b+c);
  return r;
}
int Change_sup(string str){
  int len=str.size(),x=1,ret=0,i=0;
  while(len){
    ret=ret*x+(str[i]-'0');
    x=10;
    i++;
    len--;
  }
  return ret;
}