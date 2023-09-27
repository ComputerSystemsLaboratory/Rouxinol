#include <bits/stdc++.h>
using namespace std;
#define Rep(i,N) for(int i = 0; i < N;i++)
typedef pair<int,int> Pi;
#define F first
#define S second
#define INF 1 << 28

inline void chmax(int &a,int b) {
  a = max(a,b);
}

inline void chmin(int &a,int b) {
  a = min(a,b);
}

int main()
{
  int N, K;
  while(cin >> N >> K,N || K) {
    int data[100005];
    Rep(i,N)cin >> data[i];
    int sum = 0;
    Rep(i,K)sum += data[i];
    int maxv = sum;
    for(int i = K; i < N; i++) {
      sum += data[i] - data[i - K];
      chmax(maxv,sum);
    }
    cout << maxv << endl;
  }
  return 0;
}