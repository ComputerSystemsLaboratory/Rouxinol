#include <iostream>

using namespace std;

int main()
{
  int n, m, a[100000], t, s;

  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0){
      break;
    }
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }

    t = s = 0;
    for(int i = 0; i < m; i++){
      t += a[i];
    }
    s = t;
    for(int i = m; i < n; i++){
      t += (a[i] - a[i-m]);
      if(s < t){
	s = t;
      }
    }
    cout << s << endl;
  }

  return 0;
}