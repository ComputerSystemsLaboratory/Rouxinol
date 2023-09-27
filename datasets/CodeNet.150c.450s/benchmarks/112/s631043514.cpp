#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int n, m;
	
	char a, b;
	string ans, str;
	
	char change[50000];
	
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}
		for(int i = 0; i < 50000; i++){
			change[i] = i;
		}
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			change[a] = b;
		}
		cin >> m;
		ans = "";
		for(int i = 0; i < m; i++){
			cin >> a;
			str = "D";
			str[0] = change[a];
			ans = ans + str;
		}
		cout << ans << endl;
	}
	
	return 0;
}