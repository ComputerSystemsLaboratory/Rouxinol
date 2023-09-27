#include <iostream>
using namespace std;
int main(){

  int m,f,r,p;

  for(;;){
    cin >> m >> f >> r;
    p = m + f;
    if (m == -1&&f == -1&& r ==-1)break;

    if (m == -1|| f == -1){
        cout << 'F';
    }else if (  p >= 80){
        cout << 'A';
    }else if (p >= 65 && p < 80){
        cout << 'B';
    }else if (p >= 50 && p < 65 ){
        cout << 'C';
    }else if (p >= 30 && p < 50 && r < 50){ 
        cout << 'D';
    }else if (30 > p){
        cout << 'F';
    }else if (p >= 30 && p < 50 && r >= 50){
        cout << 'C';
    }
    
    cout << endl;
  }
    return 0;
} 

 