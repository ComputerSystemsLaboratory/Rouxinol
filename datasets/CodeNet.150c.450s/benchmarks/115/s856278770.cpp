#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(){
  int q;
  cin >> q;
  for(int m=0; m<q; m++){
    string wordx, wordy;
    cin >> wordx >> wordy;
    int L[1010][1010]={0};
    
    for(int j=0; j<wordy.size(); j++){
      for(int i=0; i<wordx.size(); i++){
	if(wordx[i]==wordy[j]){
	  L[i+1][j+1] = 1+L[i][j];
	}
	else{
	  L[i+1][j+1] = max(L[i+1][j], L[i][j+1]);
	}
      }
    }
    cout << L[wordx.size()][wordy.size()] << endl;
    
    
  }
}