#include <bits/stdc++.h>
#include <vector>
using namespace std;

string ilham, bojos;
int ndaru;
int main(){
	cin >> ilham;
	ndaru = ilham.length();
	for(int i = ndaru-1; i >= 0; i--){
		bojos = bojos + ilham[i];
	}
	cout << bojos << "\n";
	
	return 0;
}