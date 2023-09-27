#include <iostream>
#include <string>
using namespace std;

int main(){
	
	while(1){
		string x;
		int sum = 0;

		getline(cin, x);
		if(x == "0") break;

		for(int i=0;i<x.length();i++){
			sum += x[i] - 48;
		}

		cout<<sum<<endl;
	}

	return 0;
}