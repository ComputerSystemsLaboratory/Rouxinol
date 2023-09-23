#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int N;
  while(cin >> N, N){
    int cnt = 0;
    for(int i = 3; i <= N; i+=2){
      if(N % i == 0)cnt++;
    }
    cout << cnt << endl;
  }
}