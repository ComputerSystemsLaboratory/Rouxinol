#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,M;
  char graph[128];
  while(cin >> N,N){
    for(int i = 0;i < 128;i++)graph[i] = i;
    char a,b;
    for(int i = 0;i < N;i++){
      scanf(" %c %c",&a,&b);
      graph[a] = b;
    }
    cin >> M;
    for(int i = 0;i < M;i++){
      scanf(" %c",&a);
      cout << graph[a];
    }
    cout << endl;
  }
  return 0;
}