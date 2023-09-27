#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>

typedef long long ll;
using namespace std;

int main()
{
	int days[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	string week[] = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};

	int a,b;
	while(~scanf("%d %d",&a,&b)){
		if(a==0 && b==0) break;

		int passed=0;
		for(int i=0;i<a - 1;i++){
			passed += days[i];
		}

		passed += b;
		cout << week[(passed - 1) % 7] << endl;
	}
}