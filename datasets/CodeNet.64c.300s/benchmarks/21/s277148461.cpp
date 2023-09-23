#include<bits/stdc++.h>
using namespace std;
int main(){
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x = (c*d - a*f) / (b*d - a*e);
        double ans1 = (1000*((c - b*x) / a))/1000;
        double ans2 = (1000*x)/1000;
		cout << fixed << setprecision(3) << ans1 << " " << ans2 << endl;
	}
	return 0;
}
