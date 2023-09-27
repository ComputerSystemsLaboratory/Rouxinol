#include <iostream>
#include <vector>
using namespace std;

vector<vector <int>> c;
vector<int> p, h, sib;
vector<bool> t;

int pre(int id) {
	if (h[id] == 0 && p[id] != -1)
		return pre(p[id]);
	else if (h[id] != 0 && c[id][0] != -1 && t[c[id][0]] == 0) {
		t[c[id][0]] = 1; 
		return c[id][0];
	}
	else if (h[id] != 0 && c[id][1] != -1 && t[c[id][1]] == 0) {
		t[c[id][1]] = 1;
		return c[id][1];
	}
	else if (p[id] != -1)
		return pre(p[id]);
	else
		return -1;
}

int in(int id) {
	if (h[id] == 0 && p[id] != -1) {
		if (t[p[id]] == 0) {
			t[p[id]] = 1;
			return p[id];
		}
		else
			return in(p[id]);
	}
	else if (h[id] != 0 && c[id][0] != -1 && t[c[id][0]] == 0) {
		if (h[c[id][0]] == 0 || c[c[id][0]][0] == -1) {
			t[c[id][0]] = 1;
			return c[id][0];
		}
		else
			return in(c[id][0]);
	}
	else if (h[id] != 0 && c[id][1] != -1 && t[c[id][1]] == 0) {
		if (h[c[id][1]] == 0 || c[c[id][1]][0] == -1) {
			t[c[id][1]] = 1;
			return c[id][1];
		}
		else
			return in(c[id][1]);
	}
	else if (p[id] != -1) {
		if (t[p[id]] == 0) {
			t[p[id]] = 1;
			return p[id];
		}
		else
			return in(p[id]);
	}
	else
		return -1;
}

int post(int id) {
	if (h[id] == 0 && p[id] != -1) {
		if (c[p[id]][1] == id) {
			t[p[id]] = 1;
			return p[id];
		}
		else if (sib[id] != -1 && h[sib[id]] == 0) {
			t[sib[id]] = 1;
			return sib[id];
		}
		else if (sib[id] != -1)
			return post(sib[id]);
		else if (p[id] != -1) {
			t[p[id]] = 1;
			return p[id];
		}
		else
			return -1;
	}
	else if (h[id] != 0 && c[id][0] != -1 && t[c[id][0]] == 0) {
		if (h[c[id][0]] == 0) {
			t[c[id][0]] = 1;
			return c[id][0];
		}
		else if (c[id][0] != -1)
			return post(c[id][0]);
		else
			return -1;			
	}
	else if (c[id][1] != -1 && t[c[id][1]] == 0) {
		if (h[c[id][1]] == 0) {
			t[c[id][1]] = 1;
			return c[id][1];
		}
		else if (c[id][1] != -1)
			return post(c[id][1]);
		else
			return -1;
	}
	else if (sib[id] != -1 && t[sib[id]] == 0) {
		if (h[sib[id]] == 0) {
			t[sib[id]] = 1;
			return sib[id];
		}
		else if (sib[id] != -1)
			return post(sib[id]);
		else
			return -1;
	}
	else if(p[id] != -1) {
		t[p[id]] = 1;
		return p[id];
	}
	else
		return -1;
}

int main()
{
	int n = 0, id = 0;

	cin >> n;

	c.resize(n);
	p.assign(n, -1);
	h.assign(n, -1);
	sib.assign(n, -1);

	for (int i = 0; i < n; i++) {
		int l = 0, r = 0;
		cin >> id >> l >> r;
		c[id].push_back(l);
		c[id].push_back(r);

		if (l != -1) {
			p[l] = id;
			sib[l] = r;
		}
		if (r != -1) {
			p[r] = id;
			sib[r] = l;
		}
		if (l == -1 && r == -1)
			h[id] = 0;
	}

	cout << "Preorder" << endl;

	int k = 0, r = 0;
	t.assign(n, 0);

	for (int i = 0; i < n; i++) {
		if (p[i] == -1) {
			r = i;
			break;
		}
	}

	k = r;

	while (k != -1) {
		cout << " " << k;
		k = pre(k);
	}

	cout << endl << "Inorder" << endl;

	t.assign(n, 0);

	if (c[r][0] == -1) {
		k = r;
		t[r] = 1;
	}
	else
		k = in(r);

	while (k != -1) {
		cout << " " << k;
		k = in(k);
	}
	

	cout << endl << "Postorder" << endl;

	t.assign(n, 0);
	k = post(r);

	if (k == -1)
		cout << " " << r;
	else {
		while (k != -1) {
			cout << " " << k;
			k = post(k);
		}
	}

	cout << endl;

	return 0;
}