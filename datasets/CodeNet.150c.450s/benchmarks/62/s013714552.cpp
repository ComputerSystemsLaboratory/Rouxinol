#include <iostream>
using namespace std;

void sort(int &a, int &b){
	int buff;
	buff = a;
	a = b;
	b = buff;
}

int main()
{
	int a, b, c;
	int num[3];
	cin >> a >> b >> c;
	num[0] = a;
	num[1] = b;
	num[2] = c;
	while(true){
		if(num[0] <= num[1] && num[1] <= num[2])
			break;
		if(num[0] >= num[1]){
			sort(num[0], num[1]);
		}
		if(num[0] >= num[2]){
			sort(num[0], num[2]);
		}
		if(num[1] >= num[2]){
			sort(num[1], num[2]);
		}
	}

	cout << num[0] << " " << num[1] << " " << num[2] << endl;
}