#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,m,p;

  while((cin>>n>>m>>p)&&(n|m|p!=0)){
    vector<int> x(n);
    int sum=0;
    for(int i=0;i<n;i++){
      cin >> x[i];
      sum += x[i];
    }

    if(x[m-1]==0) cout << 0 << endl;
    else{
      int haitou=(sum*(100-p))/x[m-1];
      cout << haitou << endl;
    }
  }
  return 0;
}