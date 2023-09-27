#include<iostream>
using namespace std;
int main(void){
	int n, m, co[1000] = { 0 }, i, j;
	char a[1000] = { 0 }, b[1000] = { 0 }, c[100011] = { 0 };
	while (1){
		cin >> n;
		if (n == 0){ break; }
		for (i = 0; i < n; i++){
			cin >> a[i] >> b[i];
			co[i] = 1;
		}
		cin >> m;
		for (j = 0; j < m; j++){
			cin >> c[j];
			for (i = 0; i < n; i++){
				if (c[j] == a[i]){
					c[j] = b[i];
					co[i] = 0;
					break;
				}
			}
		}
		for (j = 0; j < m; j++){
			cout << c[j];
		}
		cout << endl;
	}
	return 0;
}