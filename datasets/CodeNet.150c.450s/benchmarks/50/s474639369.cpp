#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

typedef long long ll;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int N;
  while(cin >> N, N){
    N = 1000 - N;
    int ans = 0;
    ans += N / 500;
    N %= 500;
    ans += N / 100;
    N %= 100;
    ans += N / 50;
    N %= 50;
    ans += N / 10;
    N %= 10;
    ans += N / 5;
    ans += N %= 5;
    cout << ans << endl;
  }
}