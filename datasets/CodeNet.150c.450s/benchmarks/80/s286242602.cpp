#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
	int tmp;
	int asum = 0;
	int bsum = 0;


	for (int i = 0; i < 4; i++) {
		cin >> tmp;
		asum += tmp;
	}
	for (int i = 0; i < 4; i++) {
		cin >> tmp;
		bsum += tmp;
	}

	if (asum > bsum) {
		cout << asum;
	}
	else cout << bsum;

	cout << endl;



	//system("pause");
    return 0;
}


