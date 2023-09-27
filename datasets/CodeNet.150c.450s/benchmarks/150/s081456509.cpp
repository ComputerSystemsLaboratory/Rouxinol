#include<iostream>
#include<algorithm>
#include<vector>
#define all(c) (c).begin(),(c).end()

using namespace std;

int main(void){

  int n;
  cin >> n;
  vector<int>v(n);
  while(n--)cin >> v[n];
  sort(all(v));
  for(int i=0;i<v.size();i++)
    cout << v[i] << (i<v.size()-1?" ":"\n"); 

  return 0;
}