#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void){
  int n,cnt=0;
  cin >> n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin >> v[i];

  for(int i=0;i<n;i++){
    int id=i;
    for(int j=i;j<n;j++){
      if(v[id]>v[j])id=j;
    }
    if(i!=id)cnt++,swap(v[i],v[id]);
  }
  for(int i=0;i<n;i++)cout << v[i] << (i<n-1?" ":"\n");
  cout << cnt << endl;
  return 0;
}