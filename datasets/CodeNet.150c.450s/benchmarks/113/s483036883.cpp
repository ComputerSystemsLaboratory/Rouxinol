#include<iostream>
#include<vector>

using namespace std;

int main(void){
	vector<int> input;

	while (1){
		int n;
		cin >> n;
		if (n != 0){
			input.push_back(n);
		}
		else{
			break;
		}
	}

	for (int i = 0; i < input.size(); i++){
		cout << "Case " << i + 1 << ": " << input[i] << endl;
	}
	
	return 0;
}