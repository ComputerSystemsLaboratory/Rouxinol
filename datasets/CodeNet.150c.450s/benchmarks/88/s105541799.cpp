#include <iostream>

using namespace std;

int main(){
	int h, w;
	while (1){
		cin >> h >> w;
		if (w == 0 && h == 0) break;
		int d = w*w + h*h; //????§????
		int minH = 151, minW = 151, minD = 100000;

		for (int hi = 1; hi <= 150; hi++){
			for (int wi = hi+1; wi <= 150; wi++){
				if (hi == h && wi == w) continue;
				int thisD = wi*wi + hi*hi;
				int differ = thisD - d;
				if (differ >= 0){
					if (differ == 0 && minD != d && hi > h){
						minD = thisD;
						minH = hi;
						minW = wi;
						break;
					}
					if (minD > thisD && thisD > d){
						minD = thisD;
						minH = hi;
						minW = wi;
					}
				}
			}
		}
		cout << minH << " " << minW << endl;
	}
}