#include<iostream>
using namespace std;

void preParse(int u, int L[], int R[]) {
	int l, r;
	if (u == -1) return;
	cout <<" "<< u;
	l = L[u];
	r = R[u];
	preParse(l, L, R);
	preParse(r, L, R);
}
void inParse(int u, int L[], int R[]) {
	int l, r;
	if (u == -1) return;
	l = L[u];
	r = R[u];
	inParse(l, L, R);
	cout << " " << u;
	inParse(r, L, R);
}
void postParse(int u, int L[], int R[]) {
	int l, r;
	if (u == -1) return;
	l = L[u];
	r = R[u];
	postParse(l, L, R);
	postParse(r, L, R);
	cout << " " << u;
}

int main() {
	int i, id, left, right,n,u;
	int I[10000], L[10000], R[10000];

	cin >> n;
	for (i = 0; i < n; i++) I[i] = -1;
	
	for (i = 0; i < n; i++) {
		cin >> id >> left >> right;
		L[id] = left;
		R[id] = right;
		if (left != -1) I[left] = id;
		if (right != -1) I[right] = id;
	}
	for (i = 0; i < n; i++) if (I[i] == -1) u = i;

	cout << "Preorder" << endl;
	preParse(u,L,R);
	cout << endl;
	cout << "Inorder" << endl;
	inParse( u, L,  R);
	cout << endl;
	cout << "Postorder" << endl;
	postParse( u, L, R);
	cout << endl;

}