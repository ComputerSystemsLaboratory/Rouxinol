#include <iostream>
#include <vector>
using namespace std;

int main(void){
  // ??°???S???????????????
  int n;
  cin >> n;
  vector<int> s(n);
  for(int i = 0; i < n; i++)
    cin >> s[i];

  // ?????¨?????????
  int q, t, ans = 0;
  cin >> q;
  for(int i = 0; i < q; i++){
    cin >> t;

    // S?????????T??????????????????????????¢??¢?´¢
    for(int i = 0; i < n; i++){
      if(s[i] == t){
        ++ans;
        break;
      }
    }
  }

  // ??????
  cout << ans << endl;
  return 0;
}