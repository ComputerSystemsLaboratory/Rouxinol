#include<iostream>
#include<algorithm>

using namespace std;


int solve(int y, int m, int d){
	int res = 0;
	while(y != 1000){
		d++;
		if(m%2==1 || y%3==0){
			if(d == 21){
				d = 1;
				m++;
			}
		} 
		else{
			if(d == 20){
				d = 1;
				m++;
			}
			}
		if(m == 11){
			y++;
			m = 1;
		}
		res++;
	}
	return res;
}  	

int main(){
	int n, y, m, d;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> y >> m >> d;
		cout << solve(y, m, d) << endl;
	}
	return 0;
}