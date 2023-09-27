#include<iostream>
#include<vector>
#include<string>
#include<bitset>
#include<algorithm>
#include<map>
#include<queue>
#include<cmath>
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> count(1e5+1);
	long long sum = 0;
	rep(i, n) {
		cin >> a[i];
		sum += a[i];
		count[a[i]]++;
	}
	int q;
	cin >> q;
	vector<vector<long long>> b(1e5+1, vector<long long>(2));
	rep(i, q)
		cin >> b[i][0] >> b[i][1];

	rep(i,q){
		count[b[i][1]] += count[b[i][0]];
		sum = sum - count[b[i][0]] * b[i][0] + count[b[i][0]] * b[i][1];
		//cout << count[b[i][0]] <<"x"<< b[i][0] << " " << count[b[i][0]] << "x" << b[i][1] << endl;
		count[b[i][0]] = 0;
		cout << sum << endl;
	}

	return 0;
}