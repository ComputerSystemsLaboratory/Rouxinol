#include<iostream>
#include<algorithm>
using namespace std;
int main(){

  int n;

  cin >>n;
  
  int val[n];

  for(int i = 0 ; i < n ; i++)cin >> val[i];

  int minv = val[0],maxv = -1e9;

  for(int i = 1 ; i < n ; i++){
    maxv = max(maxv,val[i]-minv);
    minv = min(minv,val[i]);
  }
  
  cout <<maxv<<endl;
  
}