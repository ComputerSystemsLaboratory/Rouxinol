#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
	int a[10], num;
	int count = 0;

	while(cin >> num){
		if(num != 0){
			a[count] = num;
			count++;
		}
		else{
			cout << a[count - 1] << endl;
			count--;
		}
	}

	return 0;
}