#include <iostream>
#include <vector>
using namespace std;

int main(){
int n, a, b, c, x, f, ans;
vector<int> nvec;
	while(1){
		cin >> n >> a >> b >> c >> x;
		if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;

		nvec.clear();
		for(int i = 0; i < n; i++){
			int y;
			cin >> y;
			nvec.push_back(y);
		}

		ans = 0;
		f = 0;
		vector<int>::iterator nit;
		for(nit = nvec.begin(); ; ){
			if((*nit) == x){
				nit++;
				if(nit == nvec.end()){
					ans = f;
					break;
				}
			}
			x = (a * x + b) % c;
			f++;
			if(f > 10000){
				ans = -1;
				break;
			}
		}

		cout << ans << endl;
	}

	return 0;
}