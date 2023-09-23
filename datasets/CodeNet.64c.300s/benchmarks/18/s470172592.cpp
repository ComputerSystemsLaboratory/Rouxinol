#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

#if 0
所用時間:

感想:

#endif

int N; int A[30];

int main(){
  while(cin >> N && N){
    A[0] = 1;
    A[1] = 1;
    A[2] = A[1] + A[0];
    if(N > 2){
      for(int i = 3; i <= N; ++i){
        A[i] = A[i-1] + A[i-2] + A[i-3];
      }
    }
    cout << (A[N]/10)/365 + 1 << endl;
  }
}

