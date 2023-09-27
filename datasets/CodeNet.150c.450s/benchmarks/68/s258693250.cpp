#include <iostream>
using namespace std;

int main() {
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		int point[1000], min=1000000;
		for(int i=0; i<n; i++) cin >> point[i];
		for(int j=0; j<n; j++){
			for(int k=j+1; k<n; k++){
				int dif = point[k]-point[j];
				if(dif<0) dif *= -1;
				if(dif<min) min = dif;
			}
		}
		cout << min << endl;
	}
	return 0;
}
