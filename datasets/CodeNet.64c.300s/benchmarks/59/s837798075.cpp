#include <bits/stdc++.h>
using namespace std;
int main(){
  bool flag[10001] = {0};
  for(int i = 2;i < 10001;i++){
    if(flag[i])continue;
    for(int j = i + i;j < 10001;j += i)flag[j] = true;
  }
  int n;
  int d;
  int sum = 0;
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> d;
    int j,flug = 0;
    for(j = 2;j < 10001 && j < d;j++){
      if(flag[j])continue;
      if(d % j == 0){flug = 1;break;}
    }
    if(!flug)sum++;
  }
  cout << sum << endl;
  return 0;
}