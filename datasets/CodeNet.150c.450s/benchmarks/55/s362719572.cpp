#include<iostream>

using namespace std;


int main() {
	char Num[1000];
	int Output;

	while (true) {
		Output = 0;

		cin >> Num;

		if (Num[0] == '0'&&Num[1] == '\0')break;

		for (int i = 0; Num[i] != '\0'; i++)Output += Num[i] - '0';
		
		cout << Output << endl;
	}

	return 0;
}