#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int n,m,p;
  while(cin>>n>>m>>p,n||m||p){
    vector<int> x;
    int sum=0;
    for(int i=0,xi;i<n;++i){
      cin>>xi;
      x.push_back(xi);
      sum+=xi;
    }
    cout<<((x[m-1])?sum*(100-p)/x[m-1]:0)<<endl;
  }
  return 0;
}