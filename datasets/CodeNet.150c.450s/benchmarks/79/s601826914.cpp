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
  ll N,R;
  vector<int> v;
  ll a,b;
  vector<int> c;
  
  while(cin>>N,cin>>R,N != 0 && R != 0){
    rep(i,N)v.insert(v.begin(),i);
    rep(i,R){
      cin>>a>>b;
      for(int i=a-1;i< a+b-1;i++) c.push_back(v[i]);
      v.erase(v.begin() + a - 1, v.begin() + a - 1 + b);
      for(int i=0;i < c.size();i++)v.insert(v.begin()+ i,c[i]);
      c.clear();
    }
    cout<<v[0] + 1 <<endl;
    v.clear();
  }
  return 0;
}
   