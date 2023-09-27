#include<iostream>
#include<vector>
using namespace std;
int main()
{
  // スペース区切りの整数の入力
  int n,k;
  cin >> n >> k;
  // vectorに入力
  std::vector<int> a;
  int d=0;
  for(int i=0;i<n;i++){
    cin >> d;
    a.push_back(d);
  }
  for(int i=k;i<n;i++){
    if(a[i-k]<a[i]) cout <<  "Yes" << endl;
    else cout <<  "No" << endl;
  }
  return 0;
}