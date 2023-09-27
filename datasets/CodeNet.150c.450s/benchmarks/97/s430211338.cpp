#include <iostream>
using namespace std;
int a[401][401];
void hantei(int m,int d,int n,int num){
	for(int i = 200-n;i < 200+n;i++){
		for(int j = 200-n;j < 200+n;j++){
			if(a[i][j] == m+1){
				if(d == 0){
					a[i][j-1] = num;
				}
				else if(d == 1){
					a[i+1][j] = num;
				}
				else if(d == 2){
					a[i][j+1] = num;
				}
				else if(d == 3){
					a[i-1][j] = num;
				}
			}
		}
	}
}
int main() {
	int n = 0,m,d,ue,sita,migi,hidari;
	while(1){
		for(int i = 200 - n;i < 200 + n;i++){
			for(int j = 200 - n;j < 200 + n;j++){
				a[i][j] = 0;
			}
		}
		ue = sita = migi = hidari = 200;
		cin >> n;
		if(n == 0)break;
		a[200][200] = 1;
		for(int i = 0;i < n-1;i++){
			cin >> m >> d;
			hantei(m,d,n,i+2);
		}
		
	for(int i = 200-n;i < 200+n;i++){
		for(int j = 200-n;j < 200+n;j++){
			if(a[i][j] != 0){
				if(ue > i)ue = i;
				if(sita < i)sita = i;
				if(migi < j)migi = j;
				if(hidari > j)hidari = j;
			}
		}
	}
	cout << migi - hidari + 1 << " " << sita - ue + 1<< endl;
	}
	return 0;
}