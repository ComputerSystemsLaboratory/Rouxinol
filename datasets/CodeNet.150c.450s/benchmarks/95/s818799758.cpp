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
int main(){
  int n;
  while(cin>>n,n){
    int out=0;
    rep(i,n/2){
      vector<string>in(2);
      rep(j,2)cin>>in[j];
      sort(all(in));
      if(in[0]=="lu"&&in[1]=="ru")out++;
      if(in[0]=="ld"&&in[1]=="rd")out++;
    }
    if(n%2){
      string s;cin>>s;
    }
    cout<<out<<endl;
  }
}