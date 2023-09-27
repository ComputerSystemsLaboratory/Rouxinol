#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    int Y, M, D, ans;
    cin >> Y >> M >> D;
    ans = 0;
    if(Y % 3){
      if(M & 1)
	ans += 20 - D;
      else
	ans += 19 - D;
      if(10 - M & 1)
	ans += (10 - M + 1) / 2 * 19 + (10 - M - 1) / 2 * 20;
      else
	ans += (10 - M) / 2 * (19 + 20);
    }else{
      ans += 20 - D;
      ans += (10 - M) * 20;
    }
    for(int j = Y + 1; j < 1000; j++)
      if(j % 3)
	ans += 5 * (19 + 20);
      else
	ans += 10 * 20;
    cout << ans + 1 << endl;
  }
}