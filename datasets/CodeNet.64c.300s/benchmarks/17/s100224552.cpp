#include <bits/stdc++.h>

using namespace std;

int addTax(int base, int tax)
{
  return base * (100 + tax) / 100;
}
int sumPrice(int item1, int item2, int tax)
{
  return addTax(item1, tax) + addTax(item2, tax);
}

int main()
{
  int x, y, s;
  while(cin >> x >> y >> s, x || y || s){
    int ans = 0;
    for(int p = 1; p <= s; p++){
      for(int q = 1; q <= s; q++){
	//cout << p << " " << q << " " << sumPrice(p, q, x) << endl;
	if(sumPrice(p, q, x) == s) ans = max(ans, sumPrice(p, q, y));
      }
    }
    cout << ans << endl;
  }
  return 0;
}