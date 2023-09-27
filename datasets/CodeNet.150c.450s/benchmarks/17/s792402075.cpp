#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

int main(void){
	double a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	vector<double> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	v.push_back(e);
	sort( v.begin(), v.end(), greater<double>() );
	cout << v[0] << ' ' << v[1] << ' ' << v[2] << ' ' << v[3] << ' ' << v[4] << endl;
	return 0;
}