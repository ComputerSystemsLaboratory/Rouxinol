#include <iostream>
using namespace std;

int main(){
  int A[4];
  int B[4];
  while(cin >> A[0] >> A[1] >> A[2] >> A[3]){
    cin >> B[0] >> B[1] >> B[2] >> B[3];
    
    int hit = 0;
    int blow = 0;
    for(int i=0;i<4;i++){
      if(A[i] == B[i]) hit++;

      for(int j=0;j<4;j++){
        if(j==i) continue;
        else if(B[i] == A[j]) blow++;
      }
    }
    cout << hit << " " << blow << endl;
  }
  return 0;
}