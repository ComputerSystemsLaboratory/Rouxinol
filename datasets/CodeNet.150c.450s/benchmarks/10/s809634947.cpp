#include <iostream>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	int b[n], f[n], r[n], v[n], h1[30], h2[30], h3[30], h4[30];
	for(i = 0; i <= 29; i++){
		h1[i] = 0;
		h2[i] = 0;
		h3[i] = 0;
		h4[i] = 0;
	}
	
	for(i = 0; i <= n-1; i++){
		cin >> b[i] >> f[i] >> r[i] >> v[i];
	}
	
	for(i = 0; i <= n-1; i++){
		switch(b[i]){
			case 1:
				h1[(f[i]-1)*10+r[i]-1] += v[i];
				break;
			case 2:
				h2[(f[i]-1)*10+r[i]-1] += v[i];
				break;
			case 3:
				h3[(f[i]-1)*10+r[i]-1] += v[i];
				break;
			case 4:
				h4[(f[i]-1)*10+r[i]-1] += v[i];
				break;
		}
	}
	
	for(i = 0; i <= 29; i++){
		cout << ' ' << h1[i];
		if(i%10 == 9){
			cout << endl;
		}
	}
	cout << "####################" << endl;
	for(i = 0; i <= 29; i++){
		cout << ' ' << h2[i];
		if(i%10 == 9){
			cout << endl;
		}
	}
	cout << "####################" << endl;
	for(i = 0; i <= 29; i++){
		cout << ' ' << h3[i];
		if(i%10 == 9){
			cout << endl;
		}
	}
	cout << "####################" << endl;
	for(i = 0; i <= 29; i++){
		cout << ' ' << h4[i];
		if(i%10 == 9){
			cout << endl;
		}
	}
	
	return 0;
}
	