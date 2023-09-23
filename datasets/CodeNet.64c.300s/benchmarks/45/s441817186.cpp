#include <iostream>
using namespace std;

int main() {
	int n,m,p;
	while(cin >> n >> m >> p,n||m||p){
		int x[1000],sum=0;
		for(int i=0;i<n;i++){
			cin >> x[i];
			sum+=x[i];
		}
		if(x[m-1] == 0) cout << 0 << endl;
		else cout << (sum*100 - sum*p)/x[m-1] << endl;
	}
	return 0;
}