#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check(const vector<int> &v){
  bool fg = true;
  for(int i=0;i<v.size();i++){
    fg &= v[i]==0;
  }
  return fg;
}

int main(void){

  int n,p;
  while(cin >> n >> p, n|p){
    vector<int>v(n,0);

    int k;
    for(k=0;;k=(k+1)%n){
      if(p>0)v[k]++,p--;
      else p+=v[k],v[k]=0;
      if(check(v))break;
    }
    cout << k << endl;
  }
  
  return 0;
}