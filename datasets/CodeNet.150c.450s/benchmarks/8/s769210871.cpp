#include <iostream>
//#include <iomanip>
//#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	int n, pt=0, ph=0;;
	cin >> n;

	string t, h;

	for (int i = 0; i < n; i++){
		cin >> t >> h;

		if (t == h){
			pt++;
			ph++;
		}
		else if (t > h){
			pt += 3;
		}
		else{
			ph += 3;
		}
	}

	cout << pt << " " << ph << endl;

	return 0;
}