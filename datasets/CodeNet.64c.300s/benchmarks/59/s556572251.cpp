#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std; //pow(a,b)aのb乗を計算する
bool isprime(int n);

int main(){
	int n,x;
	int count = 0;
	cin >> n;

	for(int i = 0;i < n;i++){
		cin >> x;
		if(isprime(x)) count++;
	} 

	cout << count << endl;
	return 0 ;
}

bool isprime(int n){
	if(n == 2) return true;

	if(n < 2 || n%2 == 0) return false;

 	int i = 3;
 	while(i <= pow(n,0.5) ){
    	if(n % i == 0){
      		return false;
      	}
    	i = i + 2;
	}

 return true;
}
