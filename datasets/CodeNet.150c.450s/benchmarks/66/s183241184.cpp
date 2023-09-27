#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n,m,f;
string u[333];
int main(void){
  cin >> n;
  for(int i = 0; i < n; i++) cin >> u[i];
  cin >> m;
  for(int i = 0; i < m; i++){
    string k;
    cin >> k;
    int j;
    for(j = 0; j < n; j++) if(k == u[j]) break;
    if(n-j){
      cout <<(f?"Closed":"Opened") << " by " << k << endl;
      f^=1;
    }else{
      cout << "Unknown " << k << endl;
    }
  }
}