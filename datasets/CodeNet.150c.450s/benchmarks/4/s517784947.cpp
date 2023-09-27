#include <iostream>
using namespace std;

int main(){

	int m,n,r;
	int result;
	while(cin >> m >> n >> r, m >= 0 || n >= 0 || r >= 0){
		result=m+n;
		if(m == -1 || n == -1)
			cout << "F" << endl;
		else if(result>=80)
			cout << "A" << endl;
		else if(result<80 && result>=65)
			cout << "B" << endl;
		else if(result<65 && result>=50)
			cout << "C" << endl;
		else if(result<50 && result>=30){
			if(r == -1 || r <50)
				cout << "D" << endl;
			else if(r>=50)
				cout << "C" << endl;
		}
		else if(result<30){
			cout << "F" << endl;
		}
	}
	return 0;
}