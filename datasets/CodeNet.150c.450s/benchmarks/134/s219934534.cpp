#include <iostream>
using namespace std;
int n, v, a[25][2], r; bool f[25];
void p1(int u) { if(u == -1) return; cout << ' ' << u, p1(a[u][0]), p1(a[u][1]); }
void p2(int u) { if(u == -1) return; p2(a[u][0]), cout << ' ' << u, p2(a[u][1]); }
void p3(int u) { if(u == -1) return; p3(a[u][0]), p3(a[u][1]), cout << ' ' << u; }
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) cin >> v, cin >> a[v][0] >> a[v][1], f[a[v][0]] = f[a[v][1]] = true;
	for(int i = 0; i < n; i++) if(!f[i]) r = i;
	cout << "Preorder" << endl; p1(r); cout << endl;
	cout << "Inorder" << endl; p2(r); cout << endl;
	cout << "Postorder" << endl; p3(r); cout << endl;
}