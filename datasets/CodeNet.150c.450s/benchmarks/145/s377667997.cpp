//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <vector>
#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>
#include <map>

using namespace std;


int main(){

	string in;
	map  <string, int> maps;
	string longer = "";
	string mead;
	int cnt = 0;


	while (cin >> in){
		maps[in]++;
		if (maps[in] > cnt){
			cnt = maps[in];
			mead = in;
		}
		if (in.size() > longer.size())longer = in;
	}

	cout << mead << " " << longer << endl;

	return 0;
}