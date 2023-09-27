#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
typedef pair< int , int > P;
int main(){
  int N, M;
  while(cin >> N >> M , N){
    int d[11] = {};
    for(int i = 0 ; i < N ; i++ ){
      int a, b;
      cin >> a >> b;
      d[b] += a;
    }
    for(int i = 10 ; i && M ; i-- ){
      int t = min( d[i], M);
      d[i] -= t;
      M -= t;
    }
    int ret = 0;
    for(int i = 0 ; i < 11 ; i++ ) ret += d[i] * i;
    cout << ret << endl;
  }
}