#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n=1, y=1, m=1, d=1;
	cin >> n;
	vector<int> ans(n);
	for(int i=0; i<n; i++){
		cin >> y >> m >> d;
		for(int j=y; j<1000; j++){
			for(int k=m; k<=10; k++){
				if(j%3==0 || k%2==1) for(int l=d-1; l<20; l++) ans[i]++;
				else if(k%2==0) for(int l=d-1; l<19; l++) ans[i]++;
				else cout << "OUT" << endl;
				d=1;
			}
			m=1;
			d=1;
		}
	}
	for(int i=0; i<n; i++) cout << ans[i] << endl;
}