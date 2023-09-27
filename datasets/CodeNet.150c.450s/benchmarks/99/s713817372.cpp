#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using msi = map<string, int>;
using mii = map<int, int>;
using psi = pair<string, int>;
using pii = pair<int, int>;
using vlai = valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1E9
#define EPS 1E-9
#define MOD (ll)(1E9+7)
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}

int ToInt(string str) {
	int num=0,flag=2;
	for (int j = 0; j < str.size(); j++) {
		if ('1' <= str[j] && str[j] <= '9') {
			flag = 1;
			switch (str[j + 1]) {
				case 'm':
					num += (str[j] - '0') * 1000;
					break;
				case 'c':
					num += (str[j] - '0') * 100;
					break;
				case 'x':
					num += (str[j] - '0') * 10;
					break;
				case 'i':
					num += (str[j] - '0') ;
					break;
			}
		}
		else if (flag == 1) {
			flag = 0;
		}
		else {
			switch (str[j]) {
				case 'm':
					num +=1000;
					break;
				case 'c':
					num +=100;
					break;
				case 'x':
					num +=10;
					break;
				case 'i':
					num +=1;
					break;
			}
			flag = 0;
		}
	}
	return num;
}

void ToMCXI(int num) {
	string ans;
	if (num / 1000 > 1) {
		cout << num / 1000;
		cout << 'm';
	}
	else if (num / 1000 == 1) {
		cout << 'm';
	}
	if ((num / 100) % 10 > 1) {
		cout << (num / 100) % 10;
		cout << 'c';
	}
	else if ((num / 100) % 10 == 1) {
		cout << 'c';
	}
	if ((num / 10) % 10 > 1) {
		cout << (num / 10) % 10;
		cout << 'x';
	}
	else if ((num / 10) % 10 == 1) {
		cout << 'x';
	}
	if (num % 10 > 1) {
		cout << num % 10;
		cout << 'i';
	}
	else if (num % 10 == 1) {
		cout << 'i';
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	rep(i, n) {
		string num1, num2;
		cin >> num1 >> num2;
		//cout << ToInt(num1) <<" "<< ToInt(num2) << endl;
		int ans = ToInt(num1) + ToInt(num2);
		ToMCXI(ans);
	}
}

