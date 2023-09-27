#include <iostream>
#include <string>
using namespace std;

int main(){
	string num;
	while (1){
		int sum=0;
		cin >> num;
		if(num=="0") break;
		for(int i=0 ; i<num.size() ; i++){
			sum+=num[i]-0x30;
		}
		cout << sum << endl;
	}
}