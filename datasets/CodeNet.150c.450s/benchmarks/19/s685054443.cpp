#include<iostream>
using namespace std;

int main(){
  int x[3000], y[3000], i=0;
 
  while(1){
    cin >> x[i] >> y[i];
    if(x[i]==0 && y[i]==0) break;
    else i++;
  }

  for(int j = 0; j < i; j++){
    if(x[j] < y[j] || x[j] == y[j]){
      cout << x[j] << " " << y[j] << endl;
    }
    else{
      cout << y[j] << " " << x[j] << endl;
    }
  }

  return 0;
}