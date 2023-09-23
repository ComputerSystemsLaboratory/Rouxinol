#include<iostream>
using namespace std;
void swap(int*, int*);

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b) swap(&a, &b);
	if (b > c) swap(&b, &c);
	if (a > b) swap(&a, &b);
	cout << a << " " << b << " " << c << endl;
}

void swap(int* high, int* low){
	int tmp = *low;
	*low = *high;
	*high = tmp;
}