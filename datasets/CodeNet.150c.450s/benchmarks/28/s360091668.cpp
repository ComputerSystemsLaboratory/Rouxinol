#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int search(vector<int> const& w, int n, int k, int const p){
	int offset = 0;
	int i;
	for(i = 1; i <= n; i++){
		if(w[i] - offset > p && k > 0){
			offset = w[i-1];
			--k;
			--i;
		}
	}

	return (k >= 1) && ((i-1) == n);
}

int main(void)
{
	int n, k;
	cin >> n >> k;
	vector<int> w(n+1, 0);
	for(int i = 1; i <= n; i++){
		int temp;
		cin >> temp;
		w[i] = w[i-1] + temp;
	}
	int l = 1, r = w[n];
	while(true){
		if(search(w, n, k, (r-l)/2+l) == 1)
			r = r - (r-l)/2;
		else
			l = (r-l)/2 + l;
		if(abs(r-l) <= 1)
			break;
	}
	if(search(w, n, k, 1) == 1)
		cout << l << endl;
	else
		cout << r << endl;
}