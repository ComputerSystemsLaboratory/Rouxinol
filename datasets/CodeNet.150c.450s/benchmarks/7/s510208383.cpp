#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int n=10;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin >> v[i];
  sort(v.begin(),v.end(),greater<int>());
  cout << v[0] << endl << v[1] << endl << v[2] << endl;
}