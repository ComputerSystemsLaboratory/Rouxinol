#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n,r;
  int p,c;
  while(1){
    cin >> n >> r;
    if(n == 0) break;
    vector<int> A(n);
    for(int i = 0; i< n; i++){
      A[i] = n -i;
    }
    for(int i = 0; i < r; i++){
      cin >> p >> c;
      rotate(A.begin(),A.begin()+p-1,A.begin()+p+c-1);
      
    }
    cout << A[0]<< endl;
  }
  return 0;
}
    
    
    
      
      