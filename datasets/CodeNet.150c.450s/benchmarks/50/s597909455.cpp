#include <iostream>
#include <vector>
using namespace std;

int main(){
  int input;
  int c[6]={500,100,50,10,5,1};

  while(true){
    cin >> input;
    if(input == 0) break;
    input = 1000-input;
    int n=0;
    for(int i=0;i<6;i++){
      n+=input/c[i];
      input = input%c[i];
    }
    cout << n << endl;
  }
  return 0;
}