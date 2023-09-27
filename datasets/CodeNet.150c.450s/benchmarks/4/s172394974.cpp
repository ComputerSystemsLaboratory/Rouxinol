#include <iostream>
using namespace std;

int main() {
	int m,f,r;
	while(true){
		char c;
		cin >> m >> f >> r;
		if(m==-1&&f==-1&&r==-1)break;
		//cout << m <<" "<< f <<" "<< r << endl;
		if(m+f>=30)c='D';
		if(m+f>=50||r>=50)c='C';
		if(m+f>=65)c='B';
		if(m+f>=80)c='A';
		if(m==-1||f==-1||m+f<30)c='F';
		cout << c << endl;
	}
	// your code goes here
	
	return 0;
}