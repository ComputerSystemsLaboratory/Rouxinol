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
#include <queue>

using namespace std;


int main(){

	int buf;
	priority_queue <int> pq;

	while (cin >> buf){
		pq.push(buf);
	}

	while (pq.size()>1){
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << pq.top() << endl;

	return 0;
}