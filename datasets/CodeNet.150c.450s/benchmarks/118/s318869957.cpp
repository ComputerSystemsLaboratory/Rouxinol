#include <iostream>
using namespace std;

int mycal(int ty,int tm,int td){
	int y=1,m=1,d=1;
	int ret = 0;
	while(1){
		bool isBigMonth = y%3==0 || m%2;
		if(d > 20 - !isBigMonth){
			m++;
			d=1;
		}
		if(m > 10){
			y++;
			m=1;
		}
		if(y == ty && m == tm && d == td){
			return ret;
		}
		d++;
		ret++;
	}
}

int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int y,m,d;
		cin >> y >> m >> d;
		cout << mycal(1000,1,1) - mycal(y,m,d) << endl;
	}
	return 0;
}