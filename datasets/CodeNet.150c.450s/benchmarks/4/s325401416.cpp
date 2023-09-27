#include <iostream>
//#include <stdio.h>
using namespace std;

int main(){
	int A[100][3];
	int max;
	for (int i=0;i<100;i++){
		for (int j=0;j<3;j++){
			cin >> A[i][j];
		}
		if (A[i][0] == -1 && A[i][1] == -1 && A[i][2] == -1 ) {
			max = i;
			break;
		}
	}

	for (int i=0;i<max;i++){
		int sum = (A[i][0]+A[i][1]);
		char grade;
		
		if (A[i][0]*A[i][1]<0)grade = 'F';
		else if (sum >= 80)grade = 'A';
		else if (sum >= 65)grade = 'B';
		else if (sum >= 50)grade = 'C';
		else if (sum >= 30){
			if (A[i][2] >= 50) grade = 'C';
			else grade = 'D';}
		else grade = 'F';
		cout << grade << endl;
	}
	return 0;
}