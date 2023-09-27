#include <bits/stdc++.h>
using namespace std;
#define Rep(i,N) for(int i = 0;i < N;i++)

#define int long long 

signed main()
{
  int N,K;
  cin >> N >> K;
  int W[100000];
  Rep(i,N)cin >> W[i];
  int left = 0;
  int right = 100000 * 10000;
  while(right - left > 1){
    int P = (left + right) / 2;
    int i = 0;
    Rep(j,K){
      int sum = 0;
      while(i < N && sum + W[i] <= P){
	sum += W[i];
	i++;
      }
      if(i == N)break;
    }
    if(i == N)right = P;
    else left = P;
  }
  cout << right << endl;
  return 0;
}