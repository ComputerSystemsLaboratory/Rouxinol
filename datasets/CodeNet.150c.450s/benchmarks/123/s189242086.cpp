#include <iostream>
#include <string>
#include <math.h>
using namespace std;


bool prime(int);

int main(){
	int n,k,c=0;
	cin >> n;
	while(n--){
		cin >> k;
		if(prime(k)) c++;
	}
	cout << c << endl;
	return 0;
}

bool prime(int a){
		for(int i=2;i<(int)(sqrt((double)a))+1;i++){
			if(a%i==0) return false;
		}
		return true;
}