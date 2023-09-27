#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int e;
	while(1) {
		cin >> e;
		if(e == 0) {
			break;
		}
		
		int tmpx, tmpy, tmpz, tmpe;
		tmpe = e;
		for(tmpz = 0; pow(tmpz, 3) <= tmpe; tmpz++){}
		tmpz--;
		tmpe = tmpe - pow(tmpz, 3);
		if(tmpe == 0){
			tmpy = 0; tmpx = 0;
		}else{
			for(tmpy = 0; pow(tmpy, 2) <= tmpe; tmpy++){}
			tmpy--;
			tmpe = tmpe - pow(tmpy, 2);
			if(tmpe == 0){
				tmpx = 0;
			}else{
				tmpx = tmpe;
			}
		}
		int tmpm = tmpx + tmpy + tmpz;
		//cout << tmpz << " ! " << endl;

		int tmp;
		for(int z = 0; z <= tmpz + 1; z++) {
			for(int y = tmpy; y <= min(tmpm - z, int(pow(e - pow(z, 3), 1.0 / 2.0))); y++) {
				int x = e - pow(y, 2) - pow(z, 3);
				tmp = x + y + z;
				if(tmp < tmpm) {
					tmpm = tmp;
				}
			}
		}

		cout << tmpm << endl;
	}
	return 0;
}