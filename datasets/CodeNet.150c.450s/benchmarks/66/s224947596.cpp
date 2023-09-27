#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n, m;
	string u[100010];
	string input;
	bool isOpen = false;

	cin >> n;
	for(int i=0; i < n; i++){
		cin >> u[i];
	}
	cin >> m;
	for(int i=0; i < m; i++){
		cin >> input;

		bool isExist = false;
		for(int j=0; j < n; j++){
			if(u[j] == input){
				isExist = true;
			}
		}
		if(isExist){
			if(isOpen){
				cout << "Closed by " << input << endl;
				isOpen = false;
			}
			else {
				cout << "Opened by " << input << endl;
				isOpen = true;
			}
		}
		else {
			cout << "Unknown " << input << endl;
		}
	}
}