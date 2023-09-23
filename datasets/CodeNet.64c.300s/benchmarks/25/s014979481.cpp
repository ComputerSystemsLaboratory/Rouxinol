#include<iostream>
#include<vector>
using namespace std;

int main(void){

  int a,hit = 0,blow = 0;
  vector<int> A(4,0),B(4,0);

  while(cin >> a){

    A[0] = a;
    for(int i = 1;i < 4 ;i++){
      cin >> A[i];
    }
    for(int i = 0;i < 4;i++){
      cin >> B[i];
      if(A[i] == B[i]){
          hit++;
      }
      for(int j = 0;j < 4;j++){
        if(B[i] == A[j] && i != j){
          blow++;
        }
      }
    }
    cout << hit << " " << blow << endl;
    hit = 0;blow = 0;
  }



    return 0;
}