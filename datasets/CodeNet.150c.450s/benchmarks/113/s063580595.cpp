#include <iostream>
using namespace std;

int main() {

  int count = 0;
  int input;
  while(1){
    count++;
    cin >> input;
    if(input == 0){
      break;
    }
    cout << "Case " << count << ": " << input << endl;    
  }
  
}