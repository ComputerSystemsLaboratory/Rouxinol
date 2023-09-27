#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){
  int n;
  int i,j,k;
  int era;

  while(cin >> n){
    int count = 0;
    int S[n+1];
    for(i=2 ; i<n+1 ; i++){
      S[i] = i;
    }

    for(i=2 ; i<(
                 (int)sqrt(n)+1) ; i++){
      if(S[i] != 0){
        era = S[i];
        for(j=2 ; (j*era)<(n+1) ; j++){
          S[j*era] = 0;
        }
      }
    }

    for(i=2 ; i<n+1 ; i++){
      if(S[i] != 0){
        count++;
      }
    }
      
    cout <<  count << endl;
  }

    
  return 0;
}