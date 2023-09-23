#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int eratos(int n){
	bool isprime[n + 1];
	for(int i = 0; i <= n; i++)isprime[i] = true;
	isprime[0] = isprime[1] = false;
	for(int i = 2; i * i <= n; i++){
		if(isprime[i]){
			int j = i + i;
			while(j <= n){
				isprime[j] = false;
				j = j + i;
			}
		}
	}
	int counter = 0;
	for(int i = 0; i <= n; i++){
		if(isprime[i] == true)counter++;
	}
	return counter;
}

int main(){
	int n;
	while(cin >> n){
		cout << eratos(n) << endl;
	}
}
