#include<iostream>
using namespace std;

int N, K, a[1000000];
int main()
{
  while(true)
  {
    cin >> N >> K;
    if(!N)
      break;
    int v = 0;
    for(int i = 0; i < N; i++)
    {
      cin >> a[i];
      if(i < K)
        v += a[i];
    }
    int ans = v;
    for(int i = K; i < N; i++)
      ans = max(ans, v = v + a[i] - a[i - K]);
    cout << ans << endl;
  }
}