//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	int a[4], b[4];
	int hit = 0, blow = 0;
	bool flag = false;

	while (1){

		for (int i = 0; i < 4; i++){
			if (!(cin >> a[i])){
				flag = true;
				break;
			}
		}
		if (flag)break;
		for (int i = 0; i < 4; i++){
			cin >> b[i];
		}

		hit = 0;
		blow = 0;

		//hit
		for (int i = 0; i < 4; i++){
			if (a[i] == b[i]) hit++;
		}

		//blow
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 4; j++){
				if (a[i] == b[j]) blow++;
			}
		}

		blow -= hit;

		cout << hit << " " << blow << endl;
	}


	


	return 0;
}