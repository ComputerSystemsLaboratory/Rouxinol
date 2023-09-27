#include <iostream>
using namespace std;


int main(){

	int m,d,n,J,K;
	J=20;
	K=4;
	
	
	while (1) {
		cin>>m>>d;
		if (m==0) break;
		if (m==1||m==2) 
			n=(d+((m+12+1)*26)/10+(K-1)+(K-1)/4+J/4+5*J) %7;
		else
			n=(d+((m+1)*26)/10+K+K/4+J/4+5*J) %7;
		
		switch (n) {
			case 0:
				cout << "Saturday" <<endl;
				break;
			case 1:
				cout << "Sunday" <<endl;
				break;
			case 2:
				cout << "Monday" <<endl;
				break;
			case 3:
				cout << "Tuesday" <<endl;
				break;
			case 4:
				cout << "Wednesday" <<endl;
				break;
			case 5:
				cout << "Thursday" <<endl;
				break;
			case 6:
				cout << "Friday" <<endl;
				break;
			default :
				break;
		}
		
	}
		
	return 0;
}