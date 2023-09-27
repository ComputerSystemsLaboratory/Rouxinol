#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


void printv(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
int main() {
	
	while(1) {
		int n,r; cin >> n >> r;
		if(n + r == 0) {
			break;
		}

		vector<int> H(n,0);
		for (int i = 0; i < n; i++) {
			H[i] = n - i;
		}

		for (int j = 0; j < r; j++) {
			vector<int> a;
			vector<int> b;
			int p,c; cin >> p >> c;
			for (int i = 0; i < p-1; i++) {
				a.push_back(H[i]);
			}
			//cout << "a" << endl;
			//printv(a);
			for (int i = p - 1; i < p - 1 + c; i++) {
				b.push_back(H[i]);
			}
			//cout << "b" << endl;
			//printv(b);
		
			for (int i = 0; i < c; i++) {
				H[i] = b[i];
			}
			//cout << "H1" << endl;
			//printv(H);
			for (int i = 0; i < p - 1; i++) {
				H[c + i] = a[i];
			}
			//cout << "H2" << endl;
			//printv(H);
		}
		cout << H[0] << endl;
	}


	return 0;
}

