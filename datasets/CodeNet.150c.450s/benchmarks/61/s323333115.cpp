#include <iostream>
using namespace std;

int main(){
	int n, a, b, c, x;
	while(cin>>n>>a>>b>>c>>x,n||a||b||c||x){
		int cnt = 0;
		for(int i = 0; i < n; i++){
			int y;
			cin >> y;
			if(x == y && i == 0) continue;
			while(true){
				cnt++;
				if(cnt > 10000) break;
				x = (a*x+b)%c;
				if(x == y) break;
			}
			if(cnt > 10000){
				for(int j = i+1; j < n; j++) cin >> y;
				cnt = -1;
				break;
			}
		}
		cout << cnt << endl;
	}
}