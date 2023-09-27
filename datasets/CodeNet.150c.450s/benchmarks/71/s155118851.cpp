#include <iostream>

using namespace std;

int main(){

	int a, b, c, d;
	int n = 0;

	while(cin >> n){

	int count = 0;
	for(a=0; a<=9; a++){
		for(b=0; b<=9; b++){
			for(c=0; c<=9; c++){
				for(d=0; d<=9; d++){
					if(a+b+c+d == n){
						count = count +1;
					}
				}
			}
		}
	}

	cout << count << endl;
}
}