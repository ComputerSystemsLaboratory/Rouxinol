#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 1; i <= num; i++){
		int x = i;

		if ((i % 3) == 0){
			cout << " " << i;
			x = 0;
		}

		while (x){
			if (x % 10 == 3){
				cout << " " << i;
				break;
			}
			x /= 10;
		}
	}
	cout << endl;

	return 0;
}