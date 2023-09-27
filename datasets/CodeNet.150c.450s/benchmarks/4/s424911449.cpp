#include<iostream>
using namespace std;

int main(){
	int m,f,r;
	
	while (1){
		cin >> m >> f >> r ;
		if (m==-1 && f==-1 && r==-1) break;
		int s=m+f;
		if (m==-1 || f==-1) cout << "F" << endl;
		else if (s >=80) cout << "A" << endl;
		else if (65<=s && s<80) cout << "B" << endl;
		else if (50<=s && s<65) cout << "C" << endl;
		else if (30<=s && s<50 && r>=50) cout << "C" << endl; 
		else if (30<=s && s<50 && r<50) cout << "D" << endl;
		else if (s<30) cout << "F" << endl;
	}
	return 0;
}