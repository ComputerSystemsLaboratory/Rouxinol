#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int d , n;
	while(1){
		cin >> d;
		if (cin.eof())
			break;
		n=600/d;
		int s=0;
		for (int i=1; i<=n; i++){
			s += d*(i-1)*d*(i-1)*d;
		}
		cout << s << endl;
	}


	return 0;
}