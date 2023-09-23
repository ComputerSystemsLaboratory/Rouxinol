#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>

using namespace std;


int combart(int a) {
	int maisuu = 0;
	if (a >= 5) {
		maisuu++;
		a -= 5;
	}
	return maisuu + a;
}

int main(){

	int siharai;
	int oturi;

	while (1) {
		cin >> siharai;
		if (siharai == 0)break;

		oturi = 1000 - siharai;

		int hyaku = oturi / 100;
		int juu = (oturi % 100) / 10;
		int iti = oturi % 10;

		cout << combart(hyaku) + combart(juu) + combart(iti) << endl;
	}


//	system("pause");
    return 0;
}


