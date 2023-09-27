#include <vector>
#include <iostream>
using namespace std;

int main(void){
	int n,r,c,p,a;
	while(1){
		cin >> n >> r;
		if(!n && !r) break;
		vector<int> d(n);
		for(int i=0;i<n;i++){
			d[i] = n-i;
		}
		for(int i=0;i<r;i++){
			cin >> p >> c;
			for(int j=c; j>0;j--){
				a = d[c+p-2];
				d.erase(d.begin()+c+p-2);
				d.insert(d.begin(),a);


			}
			// for(int j=0;j<n;j++){
			// cout << d[j] << endl;
			// }
		}
		// cout << "answer" << endl;
		// for(int i=0;i<n;i++){
		// 	cout << d[i] << endl;
		// }
		cout << d[0] << endl;
	}

	return 0;
}