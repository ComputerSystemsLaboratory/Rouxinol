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
  ll sum=0;
  int N=0;
  int max_v= -1;
  int min_v= 10000;
  int a;
  int b;
  // m2;
  while(cin>>a,a != 0){
    N = a;
    // cout<<a<<endl;
    // m1;
    for(int i=0;i<N;i++){
      cin>>b;
      max_v=max(max_v,b);
      min_v=min(min_v,b);
      sum += b;
      // cout<<sum<<endl;
    }
    sum = sum - max_v - min_v;
    cout<<sum / ( N -2)<<endl;
    max_v=-1;
    min_v=1000;
    sum =0;
  }
  return 0;

}
    

    
    