#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int data[40];
	
	for (int i = 0; i < 40; i++) data[i] = 0;
	data[0] = data[1] = 1;
	data[2] = 2;
	
	for (int i = 3; i <= 30; i++){
		data[i] = (data[i - 1] + data[i - 2] + data[i - 3]);
//		cout << i << " " << data[i] << endl;
	}
	
	while (cin >> n, n){
		cout << ((data[n] / 10) + 365) / 365 << endl;
	}
	
	return 0;
}