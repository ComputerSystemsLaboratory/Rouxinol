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
char in[9][5]={
  {'.',',','!','?',' '},
  {'a','b','c'},
  {'d','e','f'},
  {'g','h','i'},
  {'j','k','l'},
  {'m','n','o'},
  {'p','q','r','s'},
  {'t','u','v'},
  {'w','x','y','z'},
};
int in1[9]={5,3,3,3,3,3,4,3,4};
int main(){
  int n;
  cin>>n;
  rep(j,n){
    string s;
    cin>>s;
    int i=0;
    while(i!=s.size()){
      int co=0;
      while(s[i]!='0'){
	co++;
	i++;
      }
      //cout<<co<<endl;
      if(co)cout<<in[s[i-1]-'0'-1][(co-1)%in1[s[i-1]-'0'-1]];
      i++;
    }
    cout<<endl;
  }
}