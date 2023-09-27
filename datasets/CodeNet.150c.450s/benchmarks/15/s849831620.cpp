#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main() {
	int na,nb;
	long long int S[10000],T[10000];
	cin >> na;
	int count = 0;
	for (int i = 0;i < na;i++) {
		cin >> S[i];
	}
	cin >> nb;
	for (int i = 0;i < nb;i++) {
		cin >> T[i];
	}
	int j = 0;
	int i = 0;
		while (j<nb) {
				if (S[i] != T[j]) {
					i++;
				}
				if (S[i] == T[j]) {
					i = 0;
					j++;
					count++;
				}
				if (i == na - 1) {
					j++;
					i = 0;
				}
			}

		cout << count << endl;
 
}