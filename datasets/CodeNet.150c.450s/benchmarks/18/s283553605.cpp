#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n, utang, bunga;
int main(){
	utang = 100000;
	cin >> n;
	for(int i = 1; i <= n; i++){
		bunga = utang * 5 / 100;
		if(bunga % 1000 == 0)
			bunga = bunga/1000 * 1000;
		else
			bunga = bunga/1000 * 1000 + 1000;
		
		utang = utang + bunga;
	}
	cout << utang << "\n";
	return 0;
}