#include <iostream>

using namespace std;

int main()
{
  int n;
  int i;

  cin >> n;

  while (n--){
    int ai = 1, bi = 1;
    int ans = 0;
    int ball[10], a[10] = {0}, b[10] = {0};
    
    for (i = 0; i < 10; i++){
      cin >> ball[i];
    }
    for (i = 0; i < 10; i++){
      if (ball[i] > a[ai - 1]){
        ans++;
        a[ai++] = ball[i];
      }
      else if (ball[i] > b[bi - 1]){
        ans++;
        b[bi++] = ball[i];
      }
      else {
        cout << "NO" << endl;
        break;
      }
    }
    if (ans == 10) cout << "YES" << endl;
  }
}