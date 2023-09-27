#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
#define MAX_N 100000000
using namespace std;
bool debug=false;



unsigned long long solve(unsigned long long a,long long b,long long n){
  unsigned long long tmp=1;
  if(b>0){
    tmp=solve(a,b/2,n);
    if(b%2==0)tmp=(tmp*tmp)%n;
    else tmp=(((tmp*tmp)%n)*a)%n;
  }
  return tmp;
}

int main(){
  long long a,b;
  cin>>a>>b;
  cout<<solve(a,b,1000000007)<<endl;
  return 0;
}