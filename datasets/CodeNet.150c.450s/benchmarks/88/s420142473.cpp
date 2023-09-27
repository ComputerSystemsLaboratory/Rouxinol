#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int x,y; cin >> x >> y;
		if(x == 0)break;
		int h = x*x + y*y;
		int dx = x, dy = y;
		int s = (int)1e9;
		bool flag = false;
		for(int i = 1; i < 151; i++){
			for(int j = i+1; j < 151; j++){
				int t = i*i + j*j;
				if(h == t && i > dx && !flag){
					flag = true;
					s = t;
					x = i; y = j;
				}
				else if( t > h && t < s){
					s = t;
					x = i; y = j;
				}
			}
		}
		cout << x << " " << y << endl;
	}


	return 0;
}


