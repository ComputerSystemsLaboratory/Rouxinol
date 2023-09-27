#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, a;
	string s;
	vector<bool> S(13, false);
	vector<bool> H(13, false);
	vector<bool> C(13, false);
	vector<bool> D(13, false);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> a;
		if (s == "S")
			S[a-1] = true;
		else if (s == "H")
			H[a-1] = true;
		else if (s == "C")
			C[a-1] = true;
		else
			D[a-1] = true;
	}

	vector<bool>::iterator it;
	it = S.begin();
	for (int i = 1; it != S.end(); i++, it++)
		if (*it == false)
			cout << "S " << i << endl;
	it = H.begin();
	for (int i = 1; it != H.end(); i++, it++)
		if (*it == false)
			cout << "H " << i << endl;
	it = C.begin();
	for (int i = 1; it != C.end(); i++, it++)
		if (*it == false)
			cout << "C " << i << endl;
	it = D.begin();
	for (int i = 1; it != D.end(); i++, it++)
		if (*it == false)
			cout << "D " << i << endl;
	return 0;
}