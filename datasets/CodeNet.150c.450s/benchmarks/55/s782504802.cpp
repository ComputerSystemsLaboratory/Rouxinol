#include <iostream>
#include <string>
using namespace std;

int main(){
	string number;
	int sum, num;
	string::size_type size;
	
	while(1){
		cin >> number;
		if(number == "0")
			break;
		size = number.size();
		sum = 0;
		
		for(int i = 0; i < size; i++){
			sum += number[i]-'0';
		}
		
		cout << sum << endl;
	}
	
	return 0;
}