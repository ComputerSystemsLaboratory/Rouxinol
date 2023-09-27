#include <iostream>
#include <queue>
#include <utility>
using namespace std;
 
#define N 1000000
#define INF 1000000

typedef pair<string, int> Proc;
 
int main(void){
  int n, quant, now;
  queue<Proc> que;
  
  cin >> n >> quant;
  for (int i=0; i<n; i++){
    string s;
    int t;
    cin >> s >> t;
    que.push(make_pair(s,t));
  }
  now = 0;
  while (que.size()){
    Proc tmpProc;
    tmpProc = que.front();
    que.pop();
    if (tmpProc.second > quant){
      que.push(make_pair(tmpProc.first, tmpProc.second-quant));
      now += quant;
    } else {
      now += tmpProc.second;
      cout << tmpProc.first << " " << now << endl;
    }
  }
  return 0;
}
