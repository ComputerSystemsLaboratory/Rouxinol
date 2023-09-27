#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>
#include <complex>
using namespace std;
typedef complex<long> xy_t;
long cross_product(xy_t a, xy_t b) { return (conj(a) * b).imag(); }
vector<string> StringSplit(const string &str, char sep)
{
	vector<std::string> v;
	stringstream ss(str);
	string buffer;
	while (getline(ss, buffer, sep))
	{
		v.push_back(buffer);
	}
	return v;
}
int main()
{
	string num;
	int n;
	cin >> n;
	while (n--)
	{
		long xy[8];
		for (int i = 0; i < 8; i++)
		{
			cin >> num;
			auto num_s = StringSplit(num, '.');
			auto lambda = [&](int dec) {int l = 5 - num_s[1].length(); while (l--) { dec *= 10; }if (num[0] == '-') { dec *= -1; }return dec; };
			int num_i = stoi(num_s[0]) * 100000 + lambda(stoi(num_s[1]));
			xy[i] = num_i;
		}
		long cp = cross_product(xy_t(xy[2] - xy[0], xy[3] - xy[1]), xy_t(xy[6] - xy[4], xy[7] - xy[5]));
		if (cp == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}

