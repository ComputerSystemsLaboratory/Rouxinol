#include <iostream>
#include <cstdlib>
using namespace std;

int n;

void solve()
{
	long double x[4],y[4],px[2],py[2];


	for(int i = 0; i < 4; i++){
		cin >> x[i] >> y[i];
	}

	px[0] = x[1] - x[0];
	px[1] = x[3] - x[2];
	py[0] = y[1] - y[0];
	py[1] = y[3] - y[2];



	if(px[0]*py[1] == px[1]*py[0])
		cout << "YES";
	else
		cout << "NO";
	cout << endl;

}

int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
		solve();


	return 0;
}