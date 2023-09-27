#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  while(cin >> n, n){
    string prv = "";
    int cnt = 0;
    while(n--){
      string f;
      cin >> f;
      if(prv == "lu" && f == "ru" ||
	 prv == "ru" && f == "lu" ||
	 prv == "ld" && f == "rd" ||
	 prv == "rd" && f == "ld") cnt++;
      prv = f;
    }
    cout << cnt << endl;
  }
  return 0;
}