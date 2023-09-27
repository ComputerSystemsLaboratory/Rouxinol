#include<iostream>
using namespace std;

int main()
{
	int stu[30];

	int i, n;

	for (i = 0; i < 30; i++){
		stu[i] = 100;
	}

	for (i = 0; i < 28; i++){
		cin >> n;
		stu[n-1] = n-1;
	}

	for (i = 0; i < 30; i++){
		if (stu[i] == 100){
			cout << i+1 << endl;
		}
	}

	return 0;
}