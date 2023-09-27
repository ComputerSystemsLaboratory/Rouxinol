#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main(){
  
  int n,k; cin>>n>>k;
  vector<int> a(n);
  for(auto &i:a) cin>>i;
  deque<int> d;
  for(int i=0; i<k; i++){
    d.push_back(a.at(i));
  }
  for(int i=k; i<n; i++){
    auto b = d.front();
    if(b<a.at(i)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    d.pop_front();
    d.push_back(a.at(i));
  }
  
  
}
