#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int ans, n, m, p, x[101], par;
	
	int key[26] = {1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,1,1,1,1,2,1,1,1,2,1};
	while(1){
		cin >> n >> m >> p;
		if(!n)break;
		ans = 0;
		par = 0;
		for(int i= 0; i<n; i++){
			cin >> x[i];
			par+= x[i];
		}
		if(x[m-1]){
			ans = par * (100-p);
			ans = ans / x[m-1];
			cout << ans << endl;
		}
		else cout << "0" << endl;
	}
	return 0;
}