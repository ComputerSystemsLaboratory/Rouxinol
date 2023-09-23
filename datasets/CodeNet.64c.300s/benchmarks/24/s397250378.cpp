#include<iostream>
using namespace std;
int main(){
	int maisuu, a[15000], b[15000];
	long long int a_p = 0, b_p = 0;
	int anser[2][10];
	int hasi;
	for (int i = 0; i < 5; i++){
		cin >> maisuu;
		if (maisuu == 0){
			break;
		}
		for (int i2 = 0; i2 < maisuu; i2++){
			cin >> a[i2];
			cin >> b[i2];
		}
		for (int i2 = 0; i2 < maisuu; i2++){
			if (a[i2] < b[i2]){
				b_p += a[i2] + b[i2];
			}
			else if (a[i2]>b[i2]){
				a_p += a[i2] + b[i2];
			}
			else if (a[i2] == b[i2]){
				a_p += a[i2];
				b_p += b[i2];
			}
		}
		anser[0][i] = a_p;
		anser[1][i] = b_p;
		maisuu = 0;
		a_p = 0;
		b_p = 0;
		hasi = i;
	}
	for (int i = 0; i <= hasi; i++){
		cout << anser[0][i] << " " << anser[1][i] << endl;
	}
	return 0;
}