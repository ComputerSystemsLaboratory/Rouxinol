#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <memory.h>
#include <map>
#include <math.h>
#include <utility>
#include <set>

#pragma warning(disable:4996)
using namespace std;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;
const double PI = 3.141592653589793238;
const Int INF = 999999999999;
typedef pair<int, int> P;


int aa[10];
int bb[10];

int main()
{
	int a[4];
	int b[4];

	int n;
	while (cin >> n){
		a[0] = n;
		REP(i, 3){
			cin >> a[i+1];
		}

		REP(i, 4){
			cin >> b[i];
		}

		REP(i, 10){
			aa[i] = bb[i] = -1;
		}


		REP(i, 4){
			aa[a[i]] = i;
			bb[b[i]] = i;
		}

		int blow = 0;
		int hit = 0;

		REP(i, 10){
			if (aa[i] >= 0){
				if (bb[i] >= 0){
					if (aa[i] == bb[i])
						++hit;
					else
						++blow;
				}
			}
		}

		cout << hit << " " << blow << endl;
	}
	return 0;

}