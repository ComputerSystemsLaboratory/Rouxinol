#include <iostream>
using namespace std;

int A[3];
int main(){
	while(cin >> A[0] >> A[1] >> A[2] && !(A[0] == -1 && A[1] == -1 && A[2] == -1)){
		int a = A[0] + A[1];
		if(A[0] == -1 || A[1] == -1) cout << "F" << endl;
		else if(a>=80) cout << "A" << endl;
		else if(a<80 && a>=65) cout << "B" << endl;
		else if(a<65 && a>=50) cout << "C" << endl;
		else if(a<50 && a>=30){
			if(A[2]>=50) cout << "C" << endl;
			else cout << "D" << endl;
		}
		else if(a<30) cout << "F" << endl;
	}
}
