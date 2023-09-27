#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

template<typename T>
T f(T s, T e, int &A, vi &v) {
	for (T i = s + 1; i != e; i++)
		if (*i > *s)
			s = i;
		else if (*i == *s) {
			int l = 0;
			for (T j = s; j != i; j++)
				l +=  *s * 2 - *j - *(j + 1);
			if (l) {
				l /= 2;
				v.push_back(l);
				A += l;
			}
			s = i;
		}
	return s;
}

int main()
{
	char c;
	int h = 0, A = 0;
	vi H = {h}, L, M;

	while (cin >> c)
		H.push_back(c == '/' ? ++h : c == '_' ? h : --h);

	auto e = f(H.begin(), H.end(), A, L);
	f(H.rbegin(), H.rend() - distance(H.begin(), e), A, M);

	for (auto i = M.rbegin(), e = M.rend(); i != e; i++)
		L.push_back(*i);
	
	cout << A << endl << L.size();
	for (int &x: L)
		cout << " " << x;
	cout << endl;
}
