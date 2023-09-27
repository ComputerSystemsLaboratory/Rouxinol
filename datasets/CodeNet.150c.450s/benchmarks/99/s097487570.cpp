#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>

#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int>pi;

/*---------------------------------------------------*/

int change(string s){
  int sum=0;
  rep(i,s.size()){
    if(s[i]!='m'&&s[i]!='c'&&s[i]!='x'&&s[i]!='i'){
      int tmp=s[i]-'0';
      if(i+1<s.size()){
	if(s[i+1]=='m'){tmp*=1000;i++;}
	else if(s[i+1]=='c'){tmp*=100;i++;}
	else if(s[i+1]=='x'){tmp*=10;i++;}
	else if(s[i+1]=='i'){tmp*=1;i++;}
      }
      sum+=tmp;
    }else{   
      if(s[i]=='m')sum+=1000;
      else if(s[i]=='c')sum+=100;
      else if(s[i]=='x')sum+=10;
      else if(s[i]=='i')sum+=1;
    }
  }
  return sum;
}

void mcxi(int n){
  char c[4]={'m','c','x','i'};
  int num[4]={0};
  for(int i=3;i>=0;i--){
    num[i]=n%10;
    n/=10;
  }
  for(int i=0;i<4;i++){
    if(num[i]!=0){
      if(num[i]!=1)cout<<num[i]<<c[i];
      else cout<<c[i];
    }
  }
  cout<<endl;
}

int main(){
  int n;
  string s,ss;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s>>ss;
    int a=change(s);
    int b=change(ss);
    mcxi(a+b);
  }
  return 0;
}