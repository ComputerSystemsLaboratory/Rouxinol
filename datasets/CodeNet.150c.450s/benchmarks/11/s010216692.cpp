#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int S[13] = { 0 }, H[13] = { 0 }, C[13] = { 0 }, D[13] = { 0 }, rank = 0;
	string str;
	for (int i = 0; i < n; i++){
		cin >> str >> rank;
		if      (str == "S") S[rank - 1] = 1;
		else if (str == "H") H[rank - 1] = 1;
		else if (str == "C") C[rank - 1] = 1;
		else                 D[rank - 1] = 1;
	}
	for (int j = 0; j < 13; j++){
		if (S[j] == 0) cout << "S " << j + 1 << endl;
	}
	for (int j = 0; j < 13; j++){
		if (H[j] == 0) cout << "H " << j + 1 << endl;
	}
	for (int j = 0; j < 13; j++){
		if (C[j] == 0) cout << "C " << j + 1 << endl;
	}
	for (int j = 0; j < 13; j++){
		if (D[j] == 0) cout << "D " << j + 1 << endl;
	}
	return 0;
}