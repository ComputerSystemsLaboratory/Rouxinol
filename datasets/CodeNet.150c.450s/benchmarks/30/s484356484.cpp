//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B&lang=jp

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n, times=0;
  cin >> n;
  int A[n];
  for(int i = 0; i<n; i++){
    cin >> A[i];
  }
  //???????????????
  int minj;

  for(int i = 0; i<n; i++){
    minj = i;
    for(int j = i; j<n; j++){
      if(A[j] < A[minj]){
        minj = j;
            }
    }
    if(i != minj){
    swap(A[i],A[minj]);
    times++;
    }
  }

  for(int i = 0; i<n-1; i++){
    cout << A[i] << " ";
  }
  cout << A[n-1] << endl;
  cout << times << endl;
}