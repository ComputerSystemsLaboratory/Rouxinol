//Factorial
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll stair(ll x){
  if(x==1)return 1;
  else return stair(x-1)*x;
}

int main(){
  ll n;
  cin>>n;
  cout<<stair(n)<<endl;
  return 0;
}