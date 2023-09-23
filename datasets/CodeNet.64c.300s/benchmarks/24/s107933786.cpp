#include<iostream>

using namespace std;

int main(){
  int n, i, Apoint, Bpoint;
  int A[10000], B[10000];
  while(cin >> n ,n){
    Apoint = 0;
    Bpoint = 0;
    for(i=0; i<n; i++){
      cin >> A[i] >> B[i];
    }
    for(i=0; i<n; i++){
      if(A[i]>B[i])Apoint += A[i]+B[i];
      else if (A[i]<B[i])Bpoint += B[i]+A[i];
      else{
	Apoint += A[i];
	Bpoint += B[i];
      }
    }

    cout << Apoint << " " << Bpoint << endl;
  }
  return 0;
}