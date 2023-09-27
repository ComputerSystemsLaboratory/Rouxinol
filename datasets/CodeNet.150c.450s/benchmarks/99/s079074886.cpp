#include <bits/stdc++.h>

using namespace std;

int mcxi_to_int(string s);
string int_to_mcxi(int n);

int main()
{
	int n;

	scanf("%d", &n);

	while (n--){
		string a, b;
		cin >> a >> b;

		int result = mcxi_to_int(a) + mcxi_to_int(b);

		cout << int_to_mcxi(result) << endl;
	}
	
	return (0);
}

int mcxi_to_int(string s)
{
	int result = 0;
	int num = 1;

	for (int i = 0; i < s.length(); i++){
		switch (s[i]){
			case 'm':
				result += 1000 * num;
				num = 1;
				break;
			case 'c':
				result += 100 * num;
				num = 1;
				break;
			case 'x':
				result += 10 * num;
				num = 1;
				break;
			case 'i':
				result += num;
				num = 1;
				break;
			default:
				num = s[i] - '0';
		}
	}

	return (result);
}

string int_to_mcxi(int n)
{
	string result = "";
	int a[4] = {1000, 100, 10, 1};
	string mcxi("mcxi");
	stringstream ss;

	for (int i = 0; i < 4; i++){
		int v = n / a[i];

		if (v > 1){
			ss << v << mcxi[i];

			n %= a[i];
		}
		else if (v == 1){
			ss << mcxi[i];

			n %= a[i];
		}
	}

	result.append(ss.str());
	return (result);
}