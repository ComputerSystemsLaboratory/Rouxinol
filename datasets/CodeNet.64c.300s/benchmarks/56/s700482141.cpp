#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n;
	cin >> n;
	typedef struct{
		int y;
		int m;
		int d;
	}ymd;
	vector<ymd> birth(n);
	for(int i=0; i<n; i++){
		cin >> birth[i].y >> birth[i].m >> birth[i].d;
	}

	for(int i=0; i<n; i++){
		int day=0;
		int y = birth[i].y;
		int m = birth[i].m;
		int d = birth[i].d;
		if(y%3==0 || m%2==1){
			day = 20-d+1;
		}else{
			day = 19-d+1;
		}
		m++;
		if(m>10){
			m=1;
			y++;
		}
		for(int j=y; j<1000; j++){
			for(int k=m; k<=10; k++){
				if(j%3==0 || k%2==1){
					day += 20;
				}
				else{
					day += 19;
				}
			}
			m=1;
		}
		cout << day << endl;
	}
	return 0;
}