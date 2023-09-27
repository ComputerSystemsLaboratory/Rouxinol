#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  while(cin >> n, n){
    int table[100000] = {0};
    for(int i = 0; i < n; i++){
      int sh, sm, ss, th, tm, ts;
      scanf("%d:%d:%d %d:%d:%d", &sh, &sm, &ss, &th, &tm, &ts);
      table[sh*3600+sm*60+ss]++;
      table[th*3600+tm*60+ts]--;
    }
    for(int i = 1; i < 100000; i++) table[i] += table[i-1];
    cout << *max_element(table, table + 100000) << endl;
  }
  return 0;
}