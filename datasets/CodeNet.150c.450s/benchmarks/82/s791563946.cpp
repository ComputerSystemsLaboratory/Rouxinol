#include <iostream>
using namespace std;

int main(void){
	int num[6][6] = {
		{ 0, 3, 5, 2, 4, 0 },
		{ 4, 0, 1, 6, 0, 3 },
		{ 2, 6, 0, 0, 1, 5 },
		{ 5, 1, 0, 0, 6, 2 },
		{ 3, 0, 6, 1, 0, 4 },
		{ 0, 4, 2, 5, 3, 0 },
	};
	int n[6], q, u,f;

	for (int i = 0; i < 6; i++){
		cin >> n[i];
	}

	cin >> q;

	for (int i = 0; i < q; i++){
		cin >> u >> f;

		for (int i = 0; i < 6; i++){
			if (n[i] == u) u = i;
			else if (n[i] == f) f = i;
		}

		cout << n[num[u][f]-1] << "\n";
	}

	return 0;
}