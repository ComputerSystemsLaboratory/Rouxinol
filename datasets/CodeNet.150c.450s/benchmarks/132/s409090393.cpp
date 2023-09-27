#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;

#define ll long long int
#define ld long long double
#define reps(i,f,n) for(int i=f;i<n;i++)
#define rep(i,n) reps(i,0,n)
#define m1 cout<<"move1"<<endl
#define m2 cout<<"move2"<<endl
#define m3 cout<<"move3"<<endl
#define m4 cout<<"move4"<<endl


int main(){
  vector<int> v(100);
  ll P;
  ll N;
  

  while(cin>>N>>P,N,P){
    ll ans = P;
    ll ans_ind = -1;
    rep(i,N) v[i] = 0;
    while(1){
      rep(i,N){
	if( P == 0){
	  P = v[i];
	  v[i] = 0;
	}
	else{
	  v[i]++;
	  P--;
	}
	if(v[i] == ans){
	  ans_ind = i;
	  break;
	}
      }
      if(ans_ind != -1){
	cout<<ans_ind<<endl;
	break;
	  }
    }
  }
  return 0;
}
      
	
	  
	    
	  
	  