#include <iostream>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
using namespace std;

void solve(int n, int p)
{
	vector<int> num(n, 0);
	int bowl = p;

	for(int i=0; ; i = (i+1)%n){
		if(bowl > 0){
			-- bowl;
			++ num[i];
		}else{
			if(num[i] == p){
				cout << i << endl;
				break;
			}
			bowl = num[i];
			num[i] = 0;
		}
	}
}

int main()
{
	for(;;){
		int n, p;
		cin >> n >> p;
		if(n == 0 && p == 0)
			break;

		solve(n, p);
	}

	return 0;
}