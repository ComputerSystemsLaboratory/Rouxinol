#include <iostream>
#include <vector>

using namespace std;

int main(){
	while(true){
		vector<int> a, b;
		int n, m, sa = 0, sb = 0;
		cin >> n >> m;
		if(n == 0 && m == 0){ break; }
		a.resize(n);
		for(int i = 0; i < n; ++i){ cin >> a[i]; sa += a[i]; }
		b.resize(m);
		for(int i = 0; i < m; ++i){ cin >> b[i]; sb += b[i]; }
		bool found = false;
		int c, d;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				if(sa - a[i] + b[j] == sb - b[j] + a[i]){
					if(!found || c + d > a[i] + b[j]){
						c = a[i];
						d = b[j];
						found = true;
					}
				}
			}
		}
		if(found){
			cout << c << " " << d << endl;
		}else{
			cout << "-1" << endl;
		}
	}
	return 0;
}