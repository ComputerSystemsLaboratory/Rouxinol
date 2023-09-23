
#include <iostream>
#include <string>

using namespace std;

int w, h, x, y, r;

bool a;

string answer;

int main(){

	cin >> w >> h >> x >> y >> r;

	if (y + r > h || y - r < 0 || x - r < 0 || x + r > w){

		a = false;

	}
	else{

		a = true;
	}


	if (a == false){
		
		answer = "No";
	}
	else{

		answer = "Yes";
	}

	cout << answer << endl;

	return 0;
}




