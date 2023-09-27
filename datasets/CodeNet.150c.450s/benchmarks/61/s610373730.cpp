#include <iostream>
#include <set>
#include <map>
using namespace std;

int main(){
	int n,a,b,c,x;
	while(cin >> n >> a >> b >> c >> x && n){
		int key[100];
		for(int i = 0 ; i < n ; i++) cin >> key[i];
		int t = 0 , T = 0;
		if(x == key[0]) t++;
		while(t < n && ++T <= 10000){
			x = (a * x + b) % c;
			if(x==key[t]){t++;}
		}
		if(T == 10001) cout << -1 << endl;
		else cout << T << endl;
	}
}