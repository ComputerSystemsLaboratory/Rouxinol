#include <iostream>
using namespace std;

int n,q,com,x,y,k;
int P[10010];
void init(int N) {
	for(int i=0; i<N; ++i) P[i] = i;
}
int root(int a){
	if(P[a] == a) return a;
	return (P[a] = root(P[a]));
}

bool same(int a, int b) {
	return root(a) == root(b);
}
void unite(int a, int b) {
	P[root(a)] = root(b);
}

int main() {
	cin >> n >> q;
	init(n);
	for(int i=0; i<q; ++i) {
		cin >>com >> x >> y;
		if(com == 0) {
			unite(x,y);
			/*for(int i=0; i<n-1; ++i) {
				cout << P[i] << " ";
			}
			cout << P[n-1] << endl; */
		} else {
			k = same(x,y);
			cout << k << endl;
		}
	}
}