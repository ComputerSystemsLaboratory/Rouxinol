#include<iostream>
using namespace std;

	int main(void){
		int train[100];
		int count = 0;
		int n;
		while(cin >> n){
			if(n > 0){
				train[count] = n;
				count++;
			}else if(n == 0){
				count--;
				cout << train[count] << endl;
			}
		}
		return 0;

	}