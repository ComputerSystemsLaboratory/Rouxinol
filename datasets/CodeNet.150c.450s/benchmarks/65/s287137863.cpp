#include <iostream>
using namespace std;
int main()
{
	int n, m, i, j, d1[36] = {}, d2[36] = {};
	char t1[36] = {}, t2[36] = {};
	cin >> n;
	for(i = 0; i < n; ++i){
		cin >> t1[i] >> d1[i];
		t2[i] = t1[i];
		d2[i] = d1[i];
	}

	for(i = 0; i < n; ++i){
		for(j = n - 1; j > i; --j){
			if( d1[j] < d1[j-1] ){
				swap(d1[j], d1[j-1]);
				swap(t1[j], t1[j-1]);
			}
		}
	}

	for(i = 0; i < n; ++i){
		cout << t1[i] << d1[i];
		if( i != n -1 )
			cout << " ";
	}
	cout << "\nStable\n";

	for(i = 0; i < n; ++i){
		m = i;
		for(j = i; j < n; ++j){
			if( d2[j] < d2[m] )
				m = j;
		}
		if( i != m){
			swap(d2[i], d2[m]);
			swap(t2[i], t2[m]);
		}
	}

	for(i = 0; i < n; ++i){
		cout << t2[i] << d2[i];
		if( i != n -1 )
			cout << " ";
	}
	cout << "\n";

	bool stable = true;
	for(i = 0; i < n; ++i){
		if( t1[i] != t2[i] )
			stable = false;
	}

	if(stable) cout << "Stable\n";
	else cout << "Not stable\n";

	return 0;
}