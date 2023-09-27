#include<bits/stdc++.h>
using namespace std;
int main()
{
  int sum[2] = { 0 };
  int point;

  for(int i = 0;i < 2;i++){
    for(int j = 0;j < 4;j++){
      cin >> point;
      sum[i] += point;
    }
  }
  if(sum[0] > sum[1])cout << sum[0] << endl;
  else if(sum[0] < sum[1])cout << sum[1] << endl;
  else cout << sum[0] << endl;
}