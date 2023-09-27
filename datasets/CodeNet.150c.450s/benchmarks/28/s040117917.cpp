#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>
#include <cstring>
#include <vector>
using namespace std;

int n,k;
int w[100001];
int maxw=0;

bool C(int t){

  if(t < maxw) return false;
  
  int n_track=1;
  int p=0;
  for(int i=0;i<n;i++){
    if(p+w[i]<=t) p+=w[i];
    else{
      n_track++;
      p = w[i];
    }
  }
  if(n_track <= k) return true;
  else return false;
  
}

int solve(int lb,int ub){
  int mid;
  while(ub-lb>1){
    mid = (lb+ub)/2;
    if(C(mid)) ub=mid;
    else lb=mid;// range to search:(lb, ub]
  }
  return ub;


}
 
int main(){

  cin>>n>>k;
  
  for(int i=0;i<n;i++){
    cin>>w[i];
    if(maxw<w[i]) maxw=w[i];
  }
  cout<<solve(0,INT_MAX/3)<<endl; 
  
  return 0;
}