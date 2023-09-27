#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int input[5];
	for(int i=0; i < 5; i++) cin >> input[i];
	sort(input, input+5);
	for(int i = 4; 0 <= i; i--){
		if(i != 4) cout << ' ';
			cout << input[i];
	}
	cout << endl;
}