#include <iostream>

using namespace std;

int coins[6] = {500, 100, 50, 10, 5, 1};

int main() {
    int pay;
    int change;
    int num;
    
    while(cin >> pay, pay){
    	change = 1000 - pay;
    	num = 0;
    	for(int i=0;i<6;++i){
    		num += change / coins[i];
    		change =  change % coins[i];
    	}
    	cout << num << endl;
    }
}