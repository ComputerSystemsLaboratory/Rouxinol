#include <iostream>
using namespace std;

int main(){
	int a[102][102] = {};
	int n,u,k,b;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> u >> k;
		for(int j = 0;j < k;j++){
			cin >> b;
			a[i][b] = 1;
		}
	}

	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(j != n){
				cout << a[i][j] << " ";
			}
			else cout << a[i][j] << endl;
		}
	}

	return 0;
}