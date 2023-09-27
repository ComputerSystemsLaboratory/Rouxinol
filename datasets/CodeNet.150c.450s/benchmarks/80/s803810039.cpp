#include <iostream>

using namespace std;

int main()
{
	int in[4];
	int total[2];

	for(int i = 0; i < 2; i++){
		total[i] = 0;
		for(int j = 0; j < 4; j++){
			cin >> in[j];
			total[i] += in[j];
		}
	}

	if(total[0] > total[1]){
		cout << total[0] << endl;
	}
	else{
		cout << total[1] << endl;
	}

	return 0;
}