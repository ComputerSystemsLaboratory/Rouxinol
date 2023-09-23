#include <bits/stdc++.h>
using namespace std;

int main(void){
	while(true){
		int x,y,s;
		cin >> x >> y >> s;
		if(x == 0 && y == 0 && s == 0)break;
		int ret = 0;
		for(int i=1;i<s;i++){
			for(int j=i;j<s;j++){
				if(i * (100+x) / 100 + j * (100+x) / 100 == s){
					ret = max(i * (100+y) / 100 + j * (100+y)/ 100,ret);
				}
			}
		}
		cout << ret << endl;
	}

	return 0;
}