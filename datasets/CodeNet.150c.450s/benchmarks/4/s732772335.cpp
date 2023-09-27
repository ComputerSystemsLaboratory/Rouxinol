#include<iostream>
using namespace std;

int main(){
  int m, f, r, sum;

  while(true){
    cin >> m >> f >> r;
    sum = m + f;

    if(m < 0 && f < 0 && r < 0) break;
    else if(m < 0 || f < 0) cout << 'F';
    else if(sum >= 80) cout << 'A';
    else if(sum < 80 && sum >= 65) cout << 'B';
    else if(sum < 65 && sum >= 50) cout << 'C';
    else if(sum < 50 && sum >= 30){
      if(r >= 50) cout << 'C';
      else cout << 'D';
    }
    else cout << 'F';
    cout << endl;
  }
  return 0;
}