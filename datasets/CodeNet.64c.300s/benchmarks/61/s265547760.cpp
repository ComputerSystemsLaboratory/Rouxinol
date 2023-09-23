#include <iostream>
using namespace std;

int main(){
	int r,c;
	cin >> r >> c;
	int sum = 0;
	int data[r*c];
	int max = 0;
	for(int i = 0; i < r * c; i++){
		cin >> data[i];
		sum += data[i];
		cout << data[i] << " ";
		if( i%c == c-1 ){
			cout << sum << endl;
			max += sum;
			sum = 0;
		}
	}
	for(int i = 0; i < c; i++){
		for(int k = i+c; k < r*c; k+=c){
			data[i] += data[k];
		}
		cout << data[i] << " ";
	}
	cout << max << endl;
	return 0;
}