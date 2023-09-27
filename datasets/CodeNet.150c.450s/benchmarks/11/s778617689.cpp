#include <iostream>
#include <iomanip>
using namespace std;
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,j) for(int i=0;i<j;i++)

int main(){
	int S[13] = {};
	int H[13] = {};
	int C[13] = {};
	int D[13] = {};

	int n;
	char gara;

	cin >> n;

	rep(i,n){

		int kawari;
		cin >> gara;
		
		if(gara == 'S'){
			cin >> kawari;
			S[kawari-1] = 1;
		}
		if(gara == 'H'){
			cin >> kawari;
			H[kawari-1] = 1;
		}
		
		if(gara == 'C'){
			cin >> kawari;
			C[kawari-1] = 1;
		}
		
		if(gara == 'D'){
			cin >> kawari;
			D[kawari-1] = 1;
		}
		
	}

	rep(i,13){
		if(S[i] == 0){
			cout << "S " << i+1 << "\n";  
		}
	}

	rep(i,13){
		if(H[i] == 0){
			cout << "H " << i+1 << "\n";  
		}
	}

	rep(i,13){
		if(C[i] == 0){
			cout << "C " << i+1 << "\n";  
		}
	}
	rep(i,13){
		if(D[i] == 0){
			cout << "D " << i+1 << "\n";  
		}
	}

	return 0;
}