#include<iostream>
#include<cstdio>
using namespace std;

void solve(int delta_x){
	int number_of_rectangle, height_of_rectangle;
	int integer = 0;
	number_of_rectangle = 600 / delta_x;
	for(int i = 1;i < number_of_rectangle;i++){
		height_of_rectangle = (delta_x * i) * (delta_x * i);
		integer += height_of_rectangle * delta_x;
	}
	cout << integer << endl;
}

int main(){
	int number_of_rectangle, delta_x;
	while(cin >> delta_x){
		solve(delta_x);
	}
	return 0;
}