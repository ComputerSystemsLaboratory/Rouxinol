#include<iostream>
#include<string>
using namespace std;

#define MAX_N 500000
#define INF 2139062143

int x[MAX_N][3], cnt;//num,left,right
int n, a;
string S;

void inorder(int u) {
	if (u == -1) { return; }
	inorder(x[u][1]);
	cout << ' ' << x[u][0];
	inorder(x[u][2]);
}
void preorder(int u) {
	if (u == -1) { return; }
	cout << ' ' << x[u][0];
	preorder(x[u][1]);
	preorder(x[u][2]);
}

int main() {
	int root = -INF;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> S;
		if (S == "print") {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
		if (S == "find") {
			cin >> a;
			int v = root;
			while (true) {
				if (a == x[v][0]) {
					cout << "yes" << endl;
					goto D;
				}
				if (a < x[v][0]) {
					if (x[v][1] == -1) {
						goto C;
					}
					v = x[v][1];
				}
				if (a > x[v][0]) {
					if (x[v][2] == -1) {
						goto C;
					}
					v = x[v][2];
				}
			}
		C:;
			cout << "no" << endl;
		D:;
		}
		if (S == "insert") {
			cin >> a;
			if (root == -INF) {
				root = cnt;
			}
			else {
				int v = root;
				while (true) {
					if (a < x[v][0]) {
						if (x[v][1] == -1) {
							x[v][1] = cnt;
							goto E;
						}
						v = x[v][1];
					}
					else {
						if (x[v][2] == -1) {
							x[v][2] = cnt;
							goto E;
						}
						v = x[v][2];
					}
				}
			E:;
			}
			x[cnt][0] = a; x[cnt][1] = -1; x[cnt][2] = -1;
			cnt++;
		}
	}
	return 0;
}