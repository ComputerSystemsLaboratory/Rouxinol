#include <iostream>
using namespace std;

int main(){
  int pnt_a = 0;
  int pnt_b = 0;
  int car_a;
  int car_b;
  int num;

  while(cin >> num){
    if(!num) break;
    for(; num; num--){
      cin >> car_a;
      cin >> car_b;
      if(car_a < car_b) pnt_b += (car_a + car_b);
      else if (car_a > car_b) pnt_a += (car_a + car_b);
      else {pnt_a += car_a; pnt_b += car_b;}
    }

    cout << pnt_a << " " << pnt_b << "\n";
    pnt_a = pnt_b = 0;
  }

return 0;
}