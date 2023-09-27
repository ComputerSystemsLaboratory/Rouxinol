#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>
#include <cstring>
#include <vector>
#include <stdio.h>
using namespace std;

typedef long long int ll;
ll S[100001];
ll T[50001];
int n,q;

int bin_search(ll *X,ll a,int s,int e){

  if(e-s==1){
    if(X[s]==a) return 1;
    else return 0;
  }

  int mid = (s+e)/2;
  if(a<X[mid]) bin_search(X, a, s, mid);
  else bin_search(X, a, mid, e);
		 
  


}


int main(){

  /*  cin>>n;
  for(int i=0;i<n;i++) cin>>S[i];
  cin>>q;
  for(int i=0;i<q;i++) cin>>T[i];

  int cnt = 0;
  for(int i=0;i<q;i++){
    cnt += bin_search(S,T[i],0,n);
  }
  cout<<cnt<<endl;
  */

  ios_base::sync_with_stdio(false);
  map<string,int> mp;
  int N;
  cin>>N;
  for(int i=0;i<N;i++){
    string op,str;
    cin>>op>>str;
    if(op=="insert"){
      mp[str]=1;
    }
    if(op=="find"){
      if(mp[str]) cout<<"yes\n";
      else cout<<"no\n";
    }
  }
  return 0;
}