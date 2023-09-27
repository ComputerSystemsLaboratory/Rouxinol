
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n,m,p;
  while(cin >> n >> m >> p,n | m | p){
    vector<int> vec(n,0);
    for(int i = 0;i < n;i++){
      cin >> vec[i];
    }
    int sum = 0;
    for(int i = 0;i < n;i++){
      sum += vec[i];
    }
    sum = sum*(100 - p);
    if(vec[m-1] == 0)cout << 0 << endl;
    else cout << (int)(sum / vec[m-1]) << endl;
  }
  return 0;
}