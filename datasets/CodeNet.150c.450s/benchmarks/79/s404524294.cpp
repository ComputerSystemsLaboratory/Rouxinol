#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n,r;
  while(cin>>n>>r && n>0 && r>0){
    vector<int> v;
    for(int i=n;i>0;i--)v.push_back(i);
    while(r--){
      int p,c;
      cin>>p>>c;
      vector<int>::iterator it = v.begin();
      rotate(it,it+p-1,it+p+c-1);
    }
    cout<<v[0]<<endl;
  }
  return 0;
}