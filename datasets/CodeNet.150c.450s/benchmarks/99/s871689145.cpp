#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
map<char,int>no;
int func(string s){
  int sum=0;
  rep(i,s.size()){
    if(isalpha(s[i]))sum+=no[s[i]];
    else sum+=(s[i]-'0')*no[s[++i]];
  }
  return sum;
}
string func1(int sum){
  string s="";
  string  in[4]={"i","x","c","m"};
  int co=0;
  while(sum){
    int a=sum%10;
    if(a)s=in[co]+s;
    if(a>1)s=(char)(a+'0')+s;
    co++;
    sum/=10;
  }
  return s;
}
int main(){
  no['m']=1000;
  no['c']=100;
  no['x']=10;
  no['i']=1;

  int n;
  cin>>n;
  while(n--){
    string a,b;
    cin>>a>>b;
    int sum=func(a)+func(b);
    //cout<<func(a)<<" "<<func(b)<<endl;;
    cout<<func1(sum)<<endl;
  }
}