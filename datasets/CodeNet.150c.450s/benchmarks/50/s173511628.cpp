#include <iostream>
using namespace std;

int change[6] = {500, 100, 50, 10, 5, 1};

int main(void){
	int mon, cnt;
	while(true){
		cin >> mon;
		if(mon == 0)	break;
		mon = 1000 - mon;
		cnt = 0;
		for(int i = 0; i < 6; i++){
			if(mon == 0)	break;
			cnt += mon / change[i];
			mon -= change[i] * (mon / change[i]);
		}
		cout << cnt << endl;
	}
  return 0;
}