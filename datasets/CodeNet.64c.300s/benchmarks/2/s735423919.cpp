#include <iostream>
using namespace std;

int main() {
	int midt, endt, ret;
	while (1){
		cin >> midt >> endt >> ret;
		if (midt == -1 && endt == -1 && ret == -1) break; 
		else if (midt == -1 || endt == -1) cout << "F" << endl;
		else if (midt + endt >= 80) cout << "A" << endl;
		else if (midt + endt >= 65) cout << "B" << endl;
		else if (midt + endt >= 50 || (midt + endt >= 30 &&ret >= 50)) cout << "C" << endl;
		else if (midt + endt >= 30) cout << "D" << endl;
		else if (midt + endt < 30) cout << "F" << endl;
	}
	return 0;
}