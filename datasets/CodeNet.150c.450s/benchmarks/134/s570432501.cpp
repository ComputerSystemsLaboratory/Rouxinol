#include <iostream>
#include <vector>
using namespace std;

vector<vector <int>> c;

void pre(int id) {
	if (id == -1)
		return;
	cout << " " << id;
	pre(c[id][0]);
	pre(c[id][1]);
}

void in(int id) {
	if (id == -1)
		return;
	in(c[id][0]);
	cout << " " << id;
	in(c[id][1]);
}

void post(int id) {
	if (id == -1)
		return;
	post(c[id][0]);
	post(c[id][1]);
	cout << " " << id;
}

int main()
{
	int n = 0, id = 0;

	cin >> n;

	c.resize(n);
	vector<int> p(n, -1);

	for (int i = 0; i < n; i++) {
		int l = 0, r = 0;
		cin >> id >> l >> r;
		c[id].push_back(l);
		c[id].push_back(r);

		if (l != -1)
			p[l] = id;
		if (r != -1)
			p[r] = id;
	}

	cout << "Preorder" << endl;

	int r = 0;

	for (int i = 0; i < n; i++) {
		if (p[i] == -1) {
			r = i;
			break;
		}
	}

	pre(r);

	cout << endl << "Inorder" << endl;

	in(r);	

	cout << endl << "Postorder" << endl;

	post(r);

	cout << endl;

	return 0;
}