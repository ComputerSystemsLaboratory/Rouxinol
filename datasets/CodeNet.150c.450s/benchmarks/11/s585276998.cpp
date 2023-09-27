#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> S(13,0);
  vector<int> H(13,0);
  vector<int> C(13,0);
  vector<int> D(13,0);
	int n;
	char c; int num;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> c >> num;
		switch(c){
			case 'S':
				S[num-1] = 1; break;
			case 'H':
				H[num-1] = 1; break;
			case 'C':
				C[num-1] = 1; break;
			case 'D':
				D[num-1] = 1; break;
		}
	}

	for(int i=0; i<13; i++){
		if(S[i] == 0) { n=i+1; cout << "S" << " " <<n << endl ;}
	}
	for(int i=0; i<13; i++){
		if(H[i] == 0) { n=i+1; cout << "H" << " " << n<< endl ;}
	}
	for(int i=0; i<13; i++){
		if(C[i] == 0) { n=i+1; cout << "C" << " " << n<< endl ;}
	}
	for(int i=0; i<13; i++){
		if(D[i] == 0) { n=i+1; cout << "D" << " " <<n<< endl;}
	}

}