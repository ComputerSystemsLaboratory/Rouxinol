#include <iostream>
using namespace std;

int main(){
	int input = -1;
	int i = 0;

	while (true){
		cin >> input;
		i++;
		if(input == 0){
			break;
		}else if(1 <= input && input <= 10000){
			cout << "Case" << " " << i << ":" << " " << input << endl;
		}else{
			cout << "error" << endl;
			break;
		}
	}
	return 0;

}