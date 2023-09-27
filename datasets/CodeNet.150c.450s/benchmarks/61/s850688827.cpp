#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){  
	int n, a, b, c, x, y[108000];
	while(cin >> n >> a >> b >> c >> x, n){	
		int res = -1;
		for(int i = 0;i < n;i++){
			cin >> y[i];
		}
		int ys = 0;
		for(int i = 0;i <= 10000;i++){
			if(y[ys] == x)ys++;
			if(ys == n){
				res = i;
				break;
			}
			x = (a * x + b) % c;
		}
		cout << res << endl;
	}
	return 0;
}