#include <iostream>
using namespace std;

int main(){
  while(true){
    int sumA = 0, sumB = 0;
    for(int i = 0; i < 4; i++){
      int x;
      if(!(cin >> x)) return 0;
      sumA += x;
    }
    for(int i = 0; i < 4; i++){
      int x;
      cin >> x;
      sumB += x;
    }

    cout << max(sumA, sumB) << endl;
  }
}