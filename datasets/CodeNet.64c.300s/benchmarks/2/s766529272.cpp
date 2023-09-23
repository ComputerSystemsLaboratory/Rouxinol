#include <iostream>
#include <iomanip>
#include <string>
#include <stack>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

int main(){


	while(1){
		int m = 0, f = 0, r = 0;
		cin >> m >> f >> r;
		if(m == -1 && f == -1 && r == -1){
			break;
		}
		if(m == -1 || f == -1) cout << "F" << "\n";
		else if(m + f >= 80) cout << "A" << "\n";
		else if(m + f >= 65) cout << "B" << "\n";
		else if(m + f >= 50) cout << "C" << "\n";
		else if(m + f >= 30 && r >= 50) cout << "C" << "\n";
		else if(m + f >= 30) cout << "D" << "\n";
		else if(m + f < 30) cout << "F" << "\n";
	}

	return 0;
}