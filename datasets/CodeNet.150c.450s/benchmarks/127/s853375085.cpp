#include<iostream>
#include<cstdio>
#include<math.h>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<set>
#include<map>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;

int m;

string reverse(string a) {
	string b = "";
	int n = a.length();
	for (int i = n - 1; i >= 0;i--) {
		b += a[i];
	}
	return b;
}


int main()
{
	cin >> m;
	for (int i = 0; i < m; i++) {
		string a;
		cin >> a;

		int n = a.length();

		set<string>s;

		for (int j = 1; j < n; j++) {
			string af = "";
			string ab = "";
			for (int k = 0; k < n; k++) {
				if (k < j)af += a[k];
				else ab += a[k];
			}
			string b = af + ab;
			string c = af + reverse(ab);
			string d = reverse(af) + ab;
			string e = reverse(af) + reverse(ab);
			string f = ab + af;
			string g = reverse(ab) + af;
			string h = ab + reverse(af);
			string i = reverse(ab) + reverse(af);
			s.insert(b);
			s.insert(c);
			s.insert(d);
			s.insert(e);
			s.insert(f);
			s.insert(g);
			s.insert(h);
			s.insert(i);
			
		}

		cout << s.size() << endl;
	}



	return 0;
}

