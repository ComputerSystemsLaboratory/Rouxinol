#include <iostream>
#include <algorithm>
using namespace std;
int N;

int main(){

while(cin >> N){
  if(N == 0) break;
  
  int A[N];
  for (int i = 0; i < N; ++i){
    A[i] = i+1; 
  }
  reverse(A,A+N);

  int r = 0; 
  cin >> r; 
  
  for (int i = 0; i < r; ++i){
    int p = 0;
    int c = 0;
    cin >> p; cin >> c;
    rotate(A,A+p-1,A+p-1+c);
  }

  cout << A[0] << endl;

}

return 0;

}