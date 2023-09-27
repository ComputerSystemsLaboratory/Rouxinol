#include <iostream>
 
using namespace std;
 
int main(){
	int x=10000;
	int input[x];
	int temp=1;
	int count=0;

	while(temp!=0){
		cin >> temp;
		input[count] = temp;
		++count;
	}

	for(int i; i<count-1; ++i){
		cout << "Case " << i+1 << ": " << input[i] << endl;
	}

}