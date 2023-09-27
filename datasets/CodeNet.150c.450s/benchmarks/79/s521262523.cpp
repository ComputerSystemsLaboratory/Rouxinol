#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
  int n,r,p,c;
  int i;
  while(cin >> n >> r && n != 0){
    vector<int> A(n);
    for(i=0;i<n;i++) A[i] = n-i;
    for(i=0;i<r;i++){
      cin >> p >> c;
      rotate(A.begin(),A.begin()+p-1,A.begin()+p+c-1);
    }
    cout << A[0] << endl;
  }
  return 0;
}