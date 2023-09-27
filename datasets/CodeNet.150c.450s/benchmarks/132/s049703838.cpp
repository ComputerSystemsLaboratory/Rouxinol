#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;

int x[55];

void init(){
  for(int i=0;i<55;i++)x[i]=0;
}

bool check(int n,int p){
  for(int i=0;i<n;i++){
    if(x[i]==p)return true;
    if(x[i]!=0)return false;
  }
  return false;
}

int main(){
  int n,p;
  while(1){
    cin>>n>>p;
    if(n==0&&p==0)break;

    init();
    
    int tmp=p;
    
    for(int i=0;;i++){
      if(check(n,p))break;
      if(tmp==0){
	tmp=x[i%n];
	x[i%n]=0;
      }else{
	tmp--;
	x[i%n]++;
      }
      if(debug) for(int j=0;j<n;j++)cout<<x[j]<<" ";
      if(debug) cout<<endl;
    }
    
    for(int i=0;i<n;i++){
      if(x[i]==p){
	cout<<i<<endl;
	break;
      }
    }
  }
  return 0;
}