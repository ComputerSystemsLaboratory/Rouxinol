#include <iostream>
#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)

using namespace std;

int sum(int a, int b)
{
  int sum = 0;
  REP(i, b - a + 1)
    sum += a + i;
  return sum;
}

int main()
{
  int N;
  int ans;
  while(1){
    cin >> N;
    if(N == 0){
      break;
    }else{
      ans = 0;
      for(int i = 1; i <= N / 2; i++)
        for(int j = i + 1; j <= N / 2 + 1; j++)
          if(sum(i, j) == N)
            ans++;
      cout << ans << endl;
    }
  }
}