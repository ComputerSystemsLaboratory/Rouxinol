#include <iostream>
using namespace std;

int main(){
  int n,r;
  int p,c;
  while(true){
    cin >> n >> r;
    if(n == 0 && r == 0) break;
    int cards[n];
    int result[n];
    for(int index=0;index<n;index++){
      cards[index] = n - index;
    }
    for(int i=0;i<r;i++){
      cin >> p >> c;
      for(int j=0;j<n;j++){
        if(j < c){
          result[j] = cards[p-1+j];
        }else if(j < c + p - 1){
          result[j] = cards[j-c];
        }else{
          result[j] = cards[j];
        }
      }
      for(int k=0;k<n;k++) cards[k] = result[k];
    }
    cout << cards[0];
    cout << endl;
  }
}

