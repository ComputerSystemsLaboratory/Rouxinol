#include <iostream>
using namespace std;

int main(){
  int m,d;
  int cnt;
  string days[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
  while(1){
    cnt = 0;
    cin >> m >> d;
    if(m == 0 && d == 0) break;
    cnt += d;
    for(m--;m>0;m--){
      switch (m){
      case 4:
      case 6:
      case 9:
      case 11:
	cnt += 30;
	break;
      case 2:
	cnt += 29;
	break;
      default:
	cnt += 31;
	break;
      }
    }
    cout << days[cnt%7] << endl;
  }
}