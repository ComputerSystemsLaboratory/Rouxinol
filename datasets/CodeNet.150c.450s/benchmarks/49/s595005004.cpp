#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  vector<int> v;
  while(cin>>n,n){
    v.clear();
    int tmp;
    for(int i=0;i<n;i++){
      cin>>tmp;
      v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int a:v){
      sum+=a;
    }
    sum-=v[0];
    sum-=v[v.size()-1];
    cout << sum / (v.size()-2)<< endl;
  }
  return 0;
}