#include<iostream>
#include<vector>
using namespace std;

int main(){
  int t=0;
  vector<int> v;
  while(1){
    int a;
    cin >> a;
    v.push_back(a);
    if(v[t] == 0)break;
    t++;
  }
  for(int i=0;i<t;i++){
    cout << "Case " << i+1 << ": " << v[i] << endl;
  }
}