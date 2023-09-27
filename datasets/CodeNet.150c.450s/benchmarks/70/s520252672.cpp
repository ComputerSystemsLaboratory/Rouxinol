#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int m, d;
	while(1){
		int ds = 0;
		cin >> m >> d;
		if(m == 0){
			break;
		}
		for (int i = 1; i < m; ++i)
		{
			if(i == 4 || i == 6 || i == 9 || i == 11){
				ds += 30;
			}else if(i == 2){
				ds += 29;
			}else{
				ds += 31;
			}
		}
		ds += d;
		//cerr << ds << endl;
		ds %= 7;
		switch(ds){
			case 1:
			cout << "Thursday" << endl;
			break;
			case 2:
			cout << "Friday" << endl;
			break;
			case 3:
			cout << "Saturday" << endl;
			break;
			case 4:
			cout << "Sunday" << endl;
			break;
			case 5:
			cout << "Monday" << endl;
			break;
			case 6:
			cout << "Tuesday" << endl;
			break;
			case 0:
			cout << "Wednesday" << endl;
			break;
		}
	}
	return 0;
}