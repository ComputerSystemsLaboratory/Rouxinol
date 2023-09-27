#include <bits/stdc++.h>
using namespace std;

int main()
{
  string num;
  while (cin >> num, num != "0"){
    int res = 0;
    for (int i = 0; i < num.size(); i++){
      res += (num[i] - '0');
    }
    
    cout << res << endl;
  }
}