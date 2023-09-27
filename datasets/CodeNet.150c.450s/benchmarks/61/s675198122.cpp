#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int N, A, B, C, X;
  while(cin >> N >> A >> B >> C >> X){
    if(!N && !A && !B && !C && !X) break;
    
    vector<int> Y(N);
    for(int i = 0 ; i < N ; i++) cin >> Y[i];
    
    int cnt = 0, pos = 0;
    bool f = false;
    while(true){
      if(pos == N) break;
      if(cnt > 10000){
	f = true;
	break;
      }
      
      if(Y[pos] == X){
	pos++;
	cnt++;
	X = (A*X + B) % C;
      }
      else{
	X = (A*X + B) % C;;
	cnt++;
      }
    }
    
    if(f) cout << "-1" << endl;
    else cout << cnt-1 << endl;
  }
  return 0;
}