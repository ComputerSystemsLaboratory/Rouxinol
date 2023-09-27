#include<iostream>

using namespace std;

int main() {
	int top[5]={0,0,0,0,0};
	int yama;

	cin >> top[0];
	for(int i=0; i<9; i++){
		cin >> yama;
		
		for(int j=0; j<3; j++){
			if(yama >top[j]){
				top[j+2] = top[j+1];
				top[j+1] = top[j];
				top[j] =yama;
				break;
			}
		}
	}
	for(int i=0; i<3; i++)
		cout << top[i] << endl;

	return 0;
}