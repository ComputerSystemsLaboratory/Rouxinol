#include <iostream>
using namespace std;

#define FLOOR true
#define STEP false

int main(void){
  while(true){
    int n;
    cin >> n;
    if(n == 0){ break; }

    string input;
    int count = 0;
    bool before_state = FLOOR, left = FLOOR, right = FLOOR;
    for(int i = 0; i < n; i++){
      cin >> input;
      if(input == "lu"){ left = STEP; }
      else if(input == "ru"){ right = STEP; }
      else if(input == "ld"){ left = FLOOR; }
      else if(input == "rd"){ right = FLOOR; }

      if(left == STEP && right == STEP){
        if(before_state == FLOOR){ ++count; }
        before_state = STEP;
      }
      else if(left == FLOOR && right == FLOOR){
        if(before_state == STEP){ ++count; }
        before_state = FLOOR;
      }
    }
    
    cout << count << endl;
  }
  
  return 0;
}