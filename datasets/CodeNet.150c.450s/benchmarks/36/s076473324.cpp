#include<iostream>

#define NUM 20

using namespace std;

int main(){
	
	int d;
	int s = 0;
	int i;
	
	for (;cin >> d;){
		
		for (i = 1; d * i <= 600 - d; i++){
			s += (i * d) * (i * d) * d;
		}
		cout << s << endl;
		s = 0;
	}
	
	return 0;
}
