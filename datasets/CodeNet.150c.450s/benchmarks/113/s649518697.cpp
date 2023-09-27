
#include <iostream>

using namespace std;

int x, i;

int main(){

	i = 0;

	while (true){

		i++;

		cin >> x;

		if (x == 0){
			break;
		}

		cout << "Case " << i << ": " << x << endl;
	}

	return 0;
}




