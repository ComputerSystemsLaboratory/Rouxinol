#include <bits/stdc++.h>

using namespace std;

int main()
{
  int partSum[1001];
  for(int i = 0; i <= 1000; i++) partSum[i] = i;
  partial_sum(partSum, partSum + 1001, partSum);
  
  int N;
  while(cin >> N, N){
    int cnt = 0;
    for(int i = 0; i < 1000; i++){
      for(int j = i + 2; j < 1001; j++){
	if(partSum[j] - partSum[i] == N) cnt++;
      }
    }
    cout << cnt << endl;
  }
  
  return 0;
}