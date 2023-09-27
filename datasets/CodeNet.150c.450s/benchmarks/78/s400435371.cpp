#include <iostream>
using namespace std;

int main(){
	int num[1000010], num2[1000010];
	for(int i=0; i< 1000010; i++) num[i] = num2[i] = 10e8;
	num[0] = num2[0] = 0;
	for(int j=0; j< 1000010; j++){
		for(int i=0; i < 1200; i++){
			int m = i*(i+1)*(i+2)/6;
			if(1000010 <= m+j) continue;
			num[j+m] = min(num[j]+1, num[j+m]);

			if(m == 0) continue;
			if(m%2 == 0) continue;
			num2[j+m] = min(num2[j]+1, num2[j+m]);
		}
	}
	int n;
	while(cin >> n, n){
		cout << num[n] << " " << num2[n] << endl;
	}
}