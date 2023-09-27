#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <queue>
#include <complex>
#include <climits>

typedef long long ll;

using namespace std;

int GetDayOfWeek(int nYear, int nMonth, int nDay)
{
	if (nMonth == 1 || nMonth == 2) {
		nYear--;
		nMonth += 12;
	}
	return (nYear + nYear / 4 - nYear / 100 + nYear / 400 + (13 * nMonth + 8) / 5 + nDay) % 7;
}


int main(){
	int a, b;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		string str;
		int s = GetDayOfWeek(2004, a, b);
		switch(s){
		case 0:
			str = "Sunday";
			break;
		case 1:
			str = "Monday";
			break;
		case 2:
			str = "Tuesday";
			break;
		case 3:
			str = "Wednesday";
			break;
		case 4:
			str = "Thursday";
			break;
		case 5:
			str = "Friday";
			break;
		case 6:
			str = "Saturday";
			break;
		}
	
	cout << str << endl;

	}

    return 0;
}