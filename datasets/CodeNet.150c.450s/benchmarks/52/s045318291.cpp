#include <cstdio>
#include <iostream>

using namespace std;

int number[100];
int car;
int position = 0;

int main(){
	while(cin >> car){
		if(car > 0){
			number[position] = car;
			position++;
		}else{
			position--;
			cout << number[position] << endl;
		}
	}
}