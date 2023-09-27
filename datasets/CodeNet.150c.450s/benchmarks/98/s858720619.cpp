#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, m, t, s, a[101], b[101], u, v;

  while(cin>>n>>m && (n+m)){
    bool f = true;
    u = v = 0;
    for(int i = 0; i < n; i++){
      cin >> a[i];
      u += a[i];
    }
    for(int j = 0; j < m; j++){
      cin >> b[j];
      v += b[j];
    }
    sort(a, a+n);
    sort(b, b+m);
    t = s = 101;

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
	if((u-a[i]+b[j]) == (v-b[j]+a[i]) && t+s > a[i]+b[j]){
	  s = a[i];
	  t = b[j];
	  f = false;
	}
      }
    }

    if(f){
      cout << -1 << endl;
    } else {
      cout << s << " " << t << endl;
    }
  }

  return 0;
}