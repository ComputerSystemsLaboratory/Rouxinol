#include <iostream>
using namespace std;

unsigned int get_answer ( const int n ) {
	if(n <= 2) return 1;
	unsigned int now, pre1 = 2, pre2 = 1, pre3 = 1;

	for ( int i = 3; i <= n; i++ ) {
		now = pre1 + pre2 + pre3;
		pre3 = pre2;
		pre2 = pre1;
		pre1 = now;
	}

	return now / (365 * 10) + 1;
}

int main(void){
	int n;

	while ( cin>>n && n ) {
		cout << get_answer(n) << endl;
	}

	return 0;
}