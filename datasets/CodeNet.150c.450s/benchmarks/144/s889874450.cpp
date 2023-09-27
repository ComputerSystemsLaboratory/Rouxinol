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
  int a,b,c;
  cin>>a>>b>>c;
  vector<vector<long long int> >in1(a);
  vector<vector<long long int> >in2(b);
  
  rep(i,a)rep(j,b){
    long long int tmp;cin>>tmp;
    in1[i].pb(tmp);
  }
  rep(i,b)rep(j,c){
    long long int tmp;cin>>tmp;
    in2[i].pb(tmp);
  }
  rep(i,a){
    bool h=false;
    rep(j,c){
      long long int sum=0;
      rep(k,b){
	sum+=in1[i][k]*in2[k][j];
      }
      if(h)cout<<" ";
      cout<<sum;
      h=true;
    }
    cout<<endl;
  }
}