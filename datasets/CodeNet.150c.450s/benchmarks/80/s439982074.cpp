#include <iostream>
using namespace std;

int main()
{
  int s, t, n;

  s = t = 0;
  for (int i = 0; i < 4; i++){
    cin >> n;
    s += n;
  }
  for (int i = 0; i < 4; i++){
    cin >> n;
    t += n;
  }
  if (s <= t){
    cout << t << endl;
    return 0;
  }
  cout << s << endl;

  return 0;
}