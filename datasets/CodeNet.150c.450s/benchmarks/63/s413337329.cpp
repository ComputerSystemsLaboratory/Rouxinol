#include <iostream>
#define INF 1000000100
#define E 500010
#define V 100100

using namespace std;
int main(){
  int v, e, r, i, j, s[E], t[E], d[E], c[V];
  cin >> v >> e >> r;
  for (i = 0; i < e; ++i){
    cin >> s[i] >> t[i] >> d[i];
  }
  
  // initializing the cost array
  for (i = 0; i < V; ++i){
    c[i] = INF;
  }
  c[r] = 0;

  // the reason why v-1 is big enough for this loop:
  //  longest path would be length of v-1
  //  for each i, cost btw(i-1, i) gets shorter/equal
  for (i = 0; i < v; ++i){
    bool updated = false;
    for (j = 0; j < e; ++j){
      int start = s[j], goal = t[j], distance = d[j];
      if(c[start] < INF && c[start]+d[j]<c[goal]){
        c[goal] = c[start]+d[j];
        updated = true;
      }
    }
    if(!updated) break;
  }
  for (i = 0; i < v; ++i){
    if(c[i] == INF){
      cout << "INF" << endl;
    }else{
      cout << c[i] << endl;
    }
  }
}