#include <iostream>

using namespace std;

int n,m,q,a[20];

bool query(int s,int d) {
	if(d == n) {
		if(s == 0) return true;
		else return false;
	}
	return query(s-a[d],d+1) || query(s,d+1);
}

int main() {
	cin >> n;
	for(int i = 0;i < n;i++) {
		cin >> a[i];
	}
	cin >> q;
	for(int i = 0;i < q;i++) {
		cin >> m;
		if(query(m,0)) cout << "yes" << endl;
		else cout <<"no" << endl;
	}
}

