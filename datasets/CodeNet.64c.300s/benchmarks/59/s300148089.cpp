#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

const long long int N = 100000000;

bool solve(long long int x){

  if(x==2) return true;
  if(x<2 || x%2==0) return false;

  for(int i=3; i<=sqrt(x); i+=2)
    if(x%i == 0) return false;
  return true;
}

int main(){

  int n,cnt=0;
  cin>>n;
  for(int i=0;i<n;i++){
    int a=0;
    cin>>a;
    if(solve(a)) cnt++;
  }
  cout<<cnt<<endl;
 
  return 0;
}