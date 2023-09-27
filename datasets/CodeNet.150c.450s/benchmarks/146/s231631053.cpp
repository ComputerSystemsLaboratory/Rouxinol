#include<iostream>
#include<cmath>
#define EPS 0.000000000001
using namespace std;

int main(){
	int n;
	double x[4], y[4];
	cin >> n;
	while (n--){
		for (int i = 0; i < 4; i++)
			cin >> x[i] >> y[i];
		if (abs((x[1] - x[0]) * (y[3] - y[2]) - (x[3] - x[2]) * (y[1] - y[0])) < EPS)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}