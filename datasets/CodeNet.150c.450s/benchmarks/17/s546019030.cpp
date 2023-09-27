/*Filename: aoj0018.cpp
 *Author: Mushiyo
 */

#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 5;

int main(){
	int firstNum = 0;

    while(cin >> firstNum){
        int num[SIZE];

        num[0] = firstNum;
        for(int i = 1; i < SIZE; ++i){
        	cin >> num[i];
        }

        sort(num, num + SIZE, greater<int>());
        
        cout << num[0];
        for(int i = 1; i < SIZE; ++i){
        	cout << " " << num[i];
        }
        cout << endl;
    }

	return 0;
}