#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>

using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)
Int Ap, Bp;

int main()
{
	int n;
	int a, b;
	
	while (cin >> n, n){
		Ap = Bp = 0;
		REP(i, n){
			cin >> a >> b;
			if (a > b){
				Ap += a;
				Ap += b;
			}
			else if (a < b){
				Bp += a;
				Bp += b;
			}
			else{
				Ap += a;
				Bp += b;
			}
		}

		cout << Ap << " " << Bp << endl;
	}
	return 0;

}