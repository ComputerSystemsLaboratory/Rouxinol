#include <iostream>
#include <string>
using namespace std;

int main(){

	string t, h;
	int n;
	int ct=0, ch=0;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> t >> h;

		if(t == h){
			ct += 1;
			ch += 1;
		}
		else if(t > h){
			ct += 3;
		}
		else if(h > t){
			ch += 3;
		}
	}

	cout << ct << " " << ch << endl;
 }