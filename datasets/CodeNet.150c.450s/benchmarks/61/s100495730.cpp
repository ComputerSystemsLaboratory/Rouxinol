#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <queue>
using namespace std;

int N, A, B, C, X;
vector<int> randomnum;

int main(void){
  while(true){
    cin >> N >> A >> B >> C >> X;
    if(N == 0) break;
    int i, j = 0;
    randomnum.clear();
    for(i = 0; i < N; i++){
      int tmp;
      cin >> tmp;
      randomnum.push_back(tmp);
    }
    i = 0;
    while(true){
      if(randomnum[i] == X){
        if(i == N - 1){
          break;
        }
        i++;
      }
      X = (A * X + B) % C;
      j++;
      if(j > 10000) break;
    }
    if(j > 10000) cout << -1 << endl;
    else cout << j << endl;
  }
  return 0;
}