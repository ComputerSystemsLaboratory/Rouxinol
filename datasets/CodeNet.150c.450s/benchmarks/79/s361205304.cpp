#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, R, p, c;
int main() {
  while (cin >> N >> R && N){
    vector<int> A(N,0);
    int i;
    for(i=0;i<N;i++){
      A[i]=N-i;
    }
    for(i=0;i<R;++i){
      cin >> p >> c;
      if (p==0){
        cout << "Incorrect input" << endl;
        exit(1);
      }
      rotate(A.begin(),A.begin()+p-1,A.begin()+p+c-1);
    }
    cout << A[0] << endl;
  }
}