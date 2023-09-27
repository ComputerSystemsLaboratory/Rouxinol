#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;

#define ll long long int
#define ld long double
#define reps(i,f,n) for(int i=f;i<n;i++)
#define rep(i,n) reps(i,0,n)
#define m1 cout<<"move1"<<endl
#define m2 cout<<"move2"<<endl
#define m3 cout<<"move3"<<endl
#define m4 cout<<"move4"<<endl


int main(){
  ll m,N_max,N_min;
  ll sa = 0;
  ll sa_max = 0;
  ll ans = 0;
  ll v[1000];

  while(cin>>m>>N_min>>N_max,m,N_min,N_max){
    sa = 0;
    sa_max = 0;
    ans = 0;
    rep(i,m)cin>>v[i];
  
    // m2;
    reps(i,N_min,N_max+1){
      sa = v[i-1] - v[i];
      //cout<<sa<<endl;
      //m1;
      if( sa_max <= sa){
	sa_max = sa;
	ans = i;
	//cout<<"#"<<ans<<endl;
      }
    }
    cout<<ans<<endl;
  }

  return 0;
}