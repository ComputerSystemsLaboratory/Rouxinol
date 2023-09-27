#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
  vector<int> a;
  int ptr=0;
  int tmp;
  while(cin>>tmp) a.push_back(tmp);
  stable_sort(a.begin(),a.end(),greater<int>());
  for(int i=0;i<a.size();++i) cout<<a[i]<<(i==a.size()-1?"":" ");
  cout<<endl;
  return 0;
}