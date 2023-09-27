#include <iostream>
using namespace std;

int main()
{
  int n, m;

  while (cin >> n){
    if (n == 0){
      break;
    }
    char bucket[256];
    for (int i = 0; i < 256; i++){
      bucket[i] = i;
    }
    for (int i = 0; i < n; i++){
      char c, d;
      cin >> c >> d;
      bucket[c] = d;
    }
    cin >> m;

    for (int i = 0; i < m; i++){
      char c;
      cin >> c;
      cout << bucket[c];
    }
    cout << endl;
  }
  return 0;
}