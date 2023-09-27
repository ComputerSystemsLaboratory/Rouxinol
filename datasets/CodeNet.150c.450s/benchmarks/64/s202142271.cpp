
#include <iostream>
#include <vector>



namespace std {
	bool solve(int p, int t, vector<int> &v) {
		if (t == 0)
			return true;
		if (t < 0)
			return false;
		if (p == v.size())
			return false;
		return (solve(p+1, t - v[p], v) || solve(p+1, t, v));
	}
} // std



int main() {

	{
		using namespace std;
		int n;
		cin >> n;
		vector<int> A;
		A.resize(n, 0);

		for (int i = 0; i < n; i++) 
			cin >> A[i];
		

		int q;
		cin >> q;
		vector<int> M;
		M.resize(q);

		for (int i = 0; i < q; i++)
			cin >> M[i];

		for (int i = 0; i < q; i++) 
			cout << (solve(0, M[i], A) ? "yes" : "no") << endl;

	}

	return 0;
}