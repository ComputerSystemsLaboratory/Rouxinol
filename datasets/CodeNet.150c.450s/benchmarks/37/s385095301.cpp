#include<iostream>
#include<iomanip>
using namespace std;

double halfadjust(double x){
	int tmp = static_cast<int>(x*10000);
	double ans = static_cast<double>(tmp)/10000;
	tmp = tmp%10;
	if(tmp >= 5)
		ans += 0.001;
	return ans;
}

double a,b,c,d,e,f;

void solve(){
	double x = (c*e-b*f)/(a*e-b*d);
	double y = (c*d-a*f)/(b*d-a*e);
	cout << setprecision(3) << fixed << halfadjust(x) << ' ';
	cout << halfadjust(y) << std::endl;
	//cout << setprecision(6);
}

int main(){
	while(cin >> a && cin >> b && cin >> c && cin >> d && cin >> e && cin >> f){
		if((!a&&!b)||(!d&&!e))
			break;
		solve();
	}
	return 0;
}