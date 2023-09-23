#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){  
	int n, m, p, x, sum, res;
	while(cin >> n >> m >> p, n | m | p){
		sum = 0;
		for(int i = 1;i <= n;i++){
			cin >> x;
			sum += x;
			if(i == m)res = x;
		}
		if(res == 0)cout << 0 << endl;
		else cout << sum*(100 - p)/res << endl;
	}
	return 0;
}