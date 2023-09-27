#include <iostream>
using namespace std;

void check_num(int *i, int *x, int *n, int *flag);
void include3(int *i, int *x, int *n, int *flag);
void end_check_num(int *i, int *x, int *n, int *flag);

void call(int n){
	int i = 1;
	int x = 0;
	int END_FLAG = 0;
	check_num(&i, &x, &n, &END_FLAG);
}

int main(void){
	int n;
	cin >> n;
	call(n);
	
	return 0;
}
void check_num(int *i, int *x, int *n, int *flag){
	*x = *i;
	if( *x % 3 == 0 ){
		cout << " " << *i;
		end_check_num(i, x, n, flag);	
	}
	else include3(i, x, n, flag);
}
void include3(int *i, int *x, int *n, int *flag){
	if( *flag == 0 ){
		if( *x % 10 == 3 ){
			cout << " " << *i;
			end_check_num(i, x, n, flag);
		}
		else{
			(*x) /= 10;
			if(*x) include3(i, x, n, flag);
			else end_check_num(i, x, n, flag);
		}
	}
}
void end_check_num(int *i, int *x, int *n, int *flag){
	if( ++(*i) <= *n ) check_num(i, x, n, flag);
	else{
		cout << endl;
		*flag = 1;
	}
}