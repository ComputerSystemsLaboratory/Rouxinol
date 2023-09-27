#include<iostream>
using namespace std;

int cntday(int m, int d);
void disp(int n);

int main(){
	int month, day, n;
	while(cin >>month >>day){
		if(month == 0) break;
		n = cntday(month, day);
		disp(n);
	}
	return 0;
}

int cntday(int m, int d){
	int ans = d, month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for(int i = 0; i < m - 1; i++){
		ans += month[i];
	}
	return ans;
}

void disp(int n){
	int cnt = n % 7;
	switch(cnt){
		case 0:
			cout <<"Wednesday" <<endl;
			break;
		case 1:
			cout <<"Thursday" <<endl;
			break;
		case 2:
			cout <<"Friday" <<endl;
			break;
		case 3:
			cout <<"Saturday" <<endl;
			break;
		case 4:
			cout <<"Sunday" <<endl;
			break;
		case 5:
			cout <<"Monday" <<endl;
			break;
		case 6:
			cout <<"Tuesday" <<endl;
	}
}