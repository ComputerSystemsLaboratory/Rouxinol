#include<iostream>
using namespace std;

char getGrade(int a,int b,int c);

int main() {
	int a,b,c;
	while (1) {
	    cin >> a >> b >> c;
	    if ( a == -1 && b == -1 && c == -1 ) break;
	    cout << getGrade(a,b,c) << endl;
	}
	return 0;
}

char getGrade(int a,int b,int c) {
	if ( a == -1 || b == -1 ) return 'F';
	else if ( a + b >= 80 ) return 'A';
	else if ( a + b < 80 && a + b >= 65 ) return 'B';
	else if ( a + b < 65 && a + b >= 50 ) return 'C';
	else if ( a + b < 50 && a + b >= 30 ) {
		if ( c >= 50 ) return 'C';
		return 'D';
	}
	else if ( a + b < 30 ) return 'F';
}

