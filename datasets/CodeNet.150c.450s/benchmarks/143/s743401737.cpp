#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n + 1);
  vec[0] = 0;
  vector<int> a(100001, 0);
  long long sum = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> vec[i];
    a[vec[i]]++;
    sum += vec[i];
  }
  
  
  int q;
  cin >> q;
  for (int i = 1; i <= q;i++){
    vector<int> totori(2);
    cin >> totori[0] >> totori[1];
    sum = sum + a[totori[0]] * (totori[1] - totori[0]);
    a[totori[1]] += a[totori[0]];
    a[totori[0]] = 0;
    cout << sum << endl;

  }
}