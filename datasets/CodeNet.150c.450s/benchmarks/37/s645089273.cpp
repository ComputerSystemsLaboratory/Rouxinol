#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;

using namespace std;
int kaijo(int n){
	int ans = 1;
	if (n != 0){
		for (int i = 0; i < n; i++){
			ans *= (n - i);
		}
	}
	else{
		ans = 1;
	}
	return ans;
}

int main(){
	double a, b, c, d, e, f;
	double x,y;
	while (cin >> a >> b >> c >> d >> e >> f){
		x = (c*e - b*f) / (a*e - b*d);
		y = (c*d - a*f) / (b*d - a*e);
		if (fabs(x) * 1000 < 1){
			x = 0;
		}
		if (fabs(y) * 1000 < 1){
			y = 0;
		}
		cout << fixed << setprecision(3) << x << " " << fixed << setprecision(3) << y << endl;
	}
	return 0;
}