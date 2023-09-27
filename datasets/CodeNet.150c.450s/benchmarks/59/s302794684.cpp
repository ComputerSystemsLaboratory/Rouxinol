#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main(){
	string strN;
	getline(cin, strN);
	int N = atoi(strN.c_str());

	string input;
	getline(cin, input);

	vector<int> A;

	istringstream iss(input);
	string strCard;
	while(getline(iss,strCard,' ')){
		A.push_back(atoi(strCard.c_str()));
	}

	for (int i = 1; i <= N; i++){
		for (int n = 0; n < N; n++){
			cout << A[n];
			if (n != N-1){
				cout << " ";
			}
		}

		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;

		cout << endl;
	}

	return 0;
}