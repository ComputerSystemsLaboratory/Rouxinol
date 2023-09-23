#include <iostream>

using namespace std;

int n,m,p;
int mem[101];

int main(){
  while(cin >> n >> m >> p, n || m || p){
    int sum = 0;
    for(int i = 1; i <= n ; i++){
      cin >> mem[i];
      sum += mem[i];
    }
    sum *= 100;
    if(mem[m]==0)cout << 0 << endl;
    else {
      sum = sum * (100-p)/100;
      cout << (int)(sum / mem[m]) << endl;
    }
  }
  return 0;
}