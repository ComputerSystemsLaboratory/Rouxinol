#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define inf (1<<29)

int main(){

  ll t[600];
  int n;

  cin >> n;
  fill(t,t+600,NULL);
  for(int i = 1; i <= n; i++){
    cin >> t[i];
    // cout << t[i];
  }


  for(int i = 1; i <= n; i++){
    // cout << t[i] << " ";
    cout << "node " << i << ": " << "key = " << t[i] << ", ";
    if(t[i/2] != NULL) printf("parent key = %lld, ",t[i/2]);
    if(t[i*2] != NULL) printf("left key = %lld, ",t[i*2]);
    if(t[2*i+1] != NULL) printf("right key = %lld, ",t[2*i+1]);
    cout << endl;
  }



}