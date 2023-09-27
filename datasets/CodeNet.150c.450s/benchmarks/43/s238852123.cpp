#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  while (true){
    int n;
    int a_ans = 0, b_ans = 0;
    int a, b;

    cin >> n;
    if (n == 0) break;

    for (int i = 0; i < n; i++){
      cin >> a >> b;

      if (a > b){
        a_ans += a + b;
      }
      else if (a < b){
        b_ans += a + b;
      }
      else{
        a_ans += a;
        b_ans += b;
      }
    }

    cout << a_ans << " " << b_ans << endl;
  }

  return 0;
}