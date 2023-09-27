#include<iostream>
using namespace std;

int main(){

  int n, y, m, d, total=0;
  cin >> n;

  for(int i=0; i<n; i++){
    cin >> y >> m >> d;
    if(y%3==0){
      total = (y-1)/3*590 + (y-1)%3*195 + (m-1)*20 + d;
    } else {
      total = (y-1)/3*590 + (y-1)%3*195 + m/2*20 + (m-1)/2*19 + d;
    }
    total = 196471 - total;
    cout << total << endl;
  }

  return 0;
}