#include<iostream>
using namespace std;

int main(){
  int i, x[10000], count = 1;
  
  for(i = 0; i < 10000; i++){
    cin >> x[i];
    if(x == 0) break;
  }
  for(i = 0; i < 10000; i++){
    if(x[i] != 0){
      cout << "Case " << count << ": " << x[i] << endl;
      count++;
    }
    else break;
  }
}
  
  