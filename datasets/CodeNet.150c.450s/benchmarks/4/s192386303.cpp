
#include <iostream>
using namespace std;


int main(){
	int check;
	do{
		check = 1;
		int m,f,r;
		cin >> m >> f >> r;
		
		if(m == -1 && f == -1 && r == -1)	check = 0;
		else if(m == -1 || f == -1)	cout << "F\n";
		else if(m + f >= 80)	cout << "A\n";
		else if(m + f >= 65)	cout << "B\n";
		else if(m + f >= 50)	cout << "C\n";
		else if(m + f >= 30 && r >= 50)	cout << "C\n";
		else if(m + f >= 30)	cout << "D\n";
		else	cout << "F\n";
		
	}while(check);
	
	return 0;
}