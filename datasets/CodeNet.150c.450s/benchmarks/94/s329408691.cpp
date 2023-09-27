#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
  int n,cnt=0;
  cin >> n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin >> v[i];
  for(int i=0;i<n;i++)
    for(int j=0;j+1<n;j++)
      if(v[j]>v[j+1])cnt++,swap(v[j],v[j+1]);
  for(int i=0;i<n;i++)cout << v[i] << (i<n-1?" ":"\n");
  cout << cnt << endl;
  return 0;
}