#include <iostream>

using namespace std;

int main(){
  int n, r;
  int card[50];
  int cutp[50];
  int cutc[50];

  while(cin >> n >> r, n || r){
    for(int i=0; i<n; i++){
      card[i] = i+1;
    }
    for(int j=0; j<r; j++){
      int p, c;
      cin >> p >> c;
      for(int i=0; i<p-1; i++){
	cutp[i] = card[n-p+1+i];
      }
      for(int i=0; i<c; i++){
	cutc[i] = card[n-p+1-c+i];
      }
      
      for(int i=0; i<p-1; i++){
	card[n-p+1-c+i] = cutp[i];
      }
      for(int i=0; i<c; i++){
	card[n-c+i] = cutc[i];
      }
    }

    cout << card[n-1] << endl;
  }
  return 0;
}