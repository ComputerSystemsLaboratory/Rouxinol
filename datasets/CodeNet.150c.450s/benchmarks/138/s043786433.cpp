#include<iostream>
#include<cstdio>
using namespace std;


int main(){
	int x,y,m;
	cin >> x >> y;

	while(1){
		m = x%y; // %??????????????????
		if( m==0 ) break;
		
		x = y; // x???y?????????
		y = m; // y???m??????????????¨??§?¬???? y???m??§??????
	}

	cout << y << "\n";
	return 0;
}