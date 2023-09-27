#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<math.h>

using namespace std;
#define C(_Str) cout << _Str << endl
typedef long long int lli;

int main()
{
	int Num,i=0,j=0,k=0;
	vector<int> Car(100);
	vector<int> Out(100);
	while (cin >> Num) {
		
		if (Num != 0) {
			Car[i] = Num;
			i++;
		}
		else {
			i--;
			Out[j] = Car[i];
			j++;
		}
	}
	while (Out[k]) { 
		cout << Out[k] << endl;
		k++;
	}
	return 0;
}