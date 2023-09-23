#include<iostream>
#include<iomanip>

double halfadjust(double x){
	int tmp = (x*10000);
	tmp = tmp%10;
	double ans = static_cast<double>(static_cast<int>(x*1000));
	ans = ans/1000;
	if(tmp >= 5)
		ans += 0.001;
	if(tmp <= -5)
		ans -= 0.001;
	return ans;
}

double a,b,c,d,e,f;

void solve(){
	using namespace std;
	double x = (c*e-b*f)/(a*e-b*d);
	double y = (c*d-a*f)/(b*d-a*e);
	cout << setprecision(3) << fixed << halfadjust(x) << ' ';
	cout << halfadjust(y) << endl;
	cout << setprecision(6);
}

int main(){
	using std::cin;
	while(cin >> a&& cin >> b&& cin >> c&& cin >> d&& cin >> e&& cin >> f){
		solve();
	}
	return 0;
}