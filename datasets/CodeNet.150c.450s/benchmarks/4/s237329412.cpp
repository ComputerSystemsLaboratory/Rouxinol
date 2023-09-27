#include <iostream>
using namespace std;

int main(){
  int m, f, r;

  while(true){
    cin >> m >> r >> f;

    int sum = m+r;
    if(m == -1 && r == -1 && f == -1){
      return 0;
    }else if(m == -1 || r == -1){
      cout << "F" << endl;
    }else if(sum >= 80){
      cout << "A" << endl;
    }else if(80 > sum && sum >= 65){
      cout << "B" << endl;
    }else if(65 > sum && sum >= 50){
      cout << "C" << endl;
    }else if(50 > sum && sum >=30){
      if(f >= 50){
        cout << "C" << endl;
      }else {
        cout << "D" << endl;
      }
    }else if(30 > sum){
      cout << "F" << endl;
    }
  }
}