#include <iostream>

using namespace std;

int main(){
	int n;
	string w0 = "AC", w1 = "WA", w2 = "TLE", w3 = "RE";
	int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	cin >> n;
	string w[n];
	
	for(int i = 0 ; i < n ; i++){
		cin >> w[i];
		if(w[i] == w0){
			c0++;
		}else if(w[i] == w1){
			c1++;
		}else if(w[i] == w2){
			c2++;
		}else if(w[i] == w3){
			c3++;
		}
	}
	cout << w0 << " x " << c0 << endl;
	cout << w1 << " x " << c1 << endl;
	cout << w2 << " x " << c2 << endl;
	cout << w3 << " x " << c3 << endl;
}