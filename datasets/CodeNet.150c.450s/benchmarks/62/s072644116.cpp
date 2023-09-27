#include <iostream>
using namespace std;

void swap(int *x,int *y){
	int tmp;
	if(*x > *y){
		tmp = *y;
		*y = *x;
		*x = tmp;
	}
}

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	swap(&a,&b);
	swap(&a,&c);
	swap(&b,&c);
	cout << a << " " << b << " " << c << endl;
	return 0;
}	