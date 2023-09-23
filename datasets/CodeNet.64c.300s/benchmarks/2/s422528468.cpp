#include <iostream>
#include <vector>
using namespace std;

int main(){
	int m=0, f=0, r=0, sum=0;
	char grade;

	do{
		sum = 0;
		cin >> m >> f >> r; 
		sum = m + f;

		if(m==-1 | f==-1) grade = 'F';
		if(sum >= 80) grade = 'A';
		if(sum >= 65 & sum < 80) grade='B';
		if(sum >= 50 & sum < 65) grade='C';
		if(sum >= 30 & sum < 50 & r < 50) grade='D';
		if(sum >= 30 & sum < 50 & r >= 50) grade='C';
		if(sum < 30) grade='F';
		if(m == -1 | f == -1) grade='F';
		if(m == -1 & f==-1 & r==-1) break;
		cout << grade << endl;
	}while(m!=-1 | f!=-1 | r!=-1);
	return 0;
}