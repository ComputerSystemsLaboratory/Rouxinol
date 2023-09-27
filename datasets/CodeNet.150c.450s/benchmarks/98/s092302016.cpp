#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;

#define ll long long int
#define ld long double
#define INF 1000000
#define reps(i,f,n) for(int i=f;i<n;i++)
#define rep(i,n) reps(i,0,n)
#define m1 cout<<"move1"<<endl
#define m2 cout<<"move2"<<endl
#define m3 cout<<"move3"<<endl
#define m4 cout<<"move4"<<endl


int main(){
  ll n,m;
  ll n_v[200];
  ll m_v[200];
  ll n_ans = 0;
  ll m_ans = 0;
  ll n_sum = 0;
  ll m_sum = 0;
  ll sum =0;


  while(cin>>n>>m,n,m){

    
    n_ans = INF;
    m_ans = INF * -1;
    n_sum = 0;
    m_sum = 0;
    sum = 0;
    

  rep(i,n){
    cin>>n_v[i];
    n_sum += n_v[i];
  }
  rep(i,m){
    cin>>m_v[i];
    m_v[i] *= -1;
    m_sum += m_v[i];
  }
  //cout<<n_sum<<"$$"<<m_sum<<endl;
  sum = n_sum + m_sum;

  rep(i,n){
    rep(j,m){
      //m2;
      if( n_v[i]*2 + m_v[j]*2 == sum){
	//	m1;
	if( n_ans - m_ans > n_v[i] - m_v[j]){
	  n_ans = n_v[i]; m_ans = m_v[j];
	  // cout<<n_ans<<"##"<<m_ans<<endl;
	}
      }
    }
  }

  if( n_ans > 1000 || m_ans > 1000){
    cout<<-1<<endl;
  }
  else{
    cout<<n_ans<<" "<<m_ans * -1<<endl;
  }
  }
  return 0;
}
  
	

  