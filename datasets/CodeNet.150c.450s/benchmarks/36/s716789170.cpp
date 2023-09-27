#include <cstdio>
#include <iostream>

using namespace std;

int d;
int sum;
int height;


int main(){
	while(cin >> d){
		sum = 0;
		for(int now = 600 - d;now >= d;now -= d){
			height = now * now;
			sum += height * d;
		}

		cout << sum << endl;
	}

}