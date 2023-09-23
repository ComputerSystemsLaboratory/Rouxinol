#include <bits/stdc++.h>

using namespace std;

int main(){
	bool a[31];
	fill_n(a, 31, false);
	int in;
	for(int i = 1; i <= 30; i++){
		cin >> in;
		a[in] = true;
	}
	for(int i = 1; i <= 30; i++){
		if(!a[i]) cout << i << endl;
	}

	return 0;
}
