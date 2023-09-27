#include <iostream>
using namespace std;

int main(){
	int n, m, i, j;
	cin >> n >> m;
	int a[n*m], b[m], ans[m];
	
	for(i = 0; i <= n*m-1; i++){
		cin >> a[i];
	}
	for(i = 0; i <= m-1; i++){
		cin >> b[i];
	}
	
	for(i = 0; i <= n-1; i++){
		ans[i] = 0;
		for(j = m*i; j <= m*i+(m-1); j++){
				ans[i] += a[j]*b[j%m];
		}
	}
	
	for(i = 0; i <= n-1; i++){
		cout << ans[i] << endl;
	}
	
	return 0;
}