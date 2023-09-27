#include <iostream>
using namespace std;

int main(void){
	int m,a,b;
	while(cin >> m >> a >> b,m){
		int p[210];
		for(int i = 0; i < m;++i) cin >> p[i];
		
		int gap = 0, idx = -1;
		for(int i = a;i <= b; ++ i){
			int cur = p[i-1] - p[i];
			if(gap <= cur) gap = cur,idx = i;
		}

		cout << idx << endl;
	}
	return 0;
}