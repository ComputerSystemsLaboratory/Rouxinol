#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  long long int n, a[5001], t, s;

  while(cin>>n && n){
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    t = a[0];

    for(int i = 0; i < n; i++){
      s = a[i];
      t = max(t, s);
      for(int j = i+1; j < n; j++){
	t = max(t, s+a[j]);
	s += a[j];
      }
    }

    cout << t << endl;
  }

  return 0;
}