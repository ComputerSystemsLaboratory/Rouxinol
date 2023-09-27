#include<iostream>
using namespace std;

int main(){
	int car[100];
	int input;
	int i = 0;

	while(cin >> input){
		if(input == 0){
			i--;
			cout << car[i] << endl;
		}else{
			car[i] = input;
			i++;
		}
	}
}