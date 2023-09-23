#include <stdio.h>
#include <iostream>
using namespace std;
void CHECK_NUM();
void INCLUDE3();
void END_CHECK_NUM();
int n, i = 1, x;
bool flag = true;
int main()
{
	cin >> n;
	CHECK_NUM();
	cout << endl;
}
void CHECK_NUM(){
	x = i;
	if (x % 3 == 0){
		cout << " " << i;
		END_CHECK_NUM();
	}
	if (flag ==true) INCLUDE3();
}
void INCLUDE3(){
	if (x % 10 == 3){
		cout << " " << i;
		END_CHECK_NUM();
	}
	if (flag == true){
		x /= 10;
		if (x) INCLUDE3();
		END_CHECK_NUM();
	}
}
void END_CHECK_NUM(){
	if (++i <= n) CHECK_NUM();
	else flag = false;
}