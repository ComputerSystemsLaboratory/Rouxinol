// class point	の練習（クラスの高度な実装）
#include <iostream>
using namespace std;



int main() {
	int buf;
	int counter = 1;

	do {
		cin >> buf;
		if (!buf)break;
		else {
			cout << "Case " << counter << ": " << buf << endl;
			counter++;
		}
	} while (1);
	
	return 0;
}

