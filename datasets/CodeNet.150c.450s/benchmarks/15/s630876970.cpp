#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

	int n;
	int q;
	int ans = 0;
	int tmp;
	bool included;

	cin >> n;

	int l[n];
	for (int i=0; i<n; i++){
		cin >> tmp;
		l[i] = tmp;
	}

	cin >> q;

	for (int i=0; i<q; i++){
		cin >> tmp;
		included = false;
		for (int j=0; j<n; j++){
			if (l[j] == tmp){
				included = true;
				break;
			}
		}
		if (included){
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
