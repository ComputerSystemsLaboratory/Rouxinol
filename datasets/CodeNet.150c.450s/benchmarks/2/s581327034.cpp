#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &vec,int p,int r){
  int x,i,j;

  x = vec.at(r);
  i = p - 1;
  for(j=p;j<r;j++){
    if(vec.at(j) <= x){
      i++;
      swap(vec.at(i),vec.at(j));
    }
  }
  swap(vec.at(i+1),vec.at(r));
  return i + 1;
}

int main(){
  int i,q,n;

  cin >> n; vector<int> vec(n);
  for(i=0;i<n;++i){
    cin >> vec.at(i);
  }
  q = partition(vec,0,n-1);
  for(i=0;i<n-1;++i){
    if(i == q) cout << "[";
    cout << vec.at(i);
    if(i == q) cout << "]";
    cout << " ";
  }
  cout << vec.at(n-1) << endl;
  return 0;
}

