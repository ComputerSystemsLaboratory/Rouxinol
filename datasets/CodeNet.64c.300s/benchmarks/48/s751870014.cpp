#include <iostream>
#include <cmath>
#define N 999999
using namespace std;

int arr[N];

void Eratosthenes(){
	for(int i = 0; i < N; i++){
		arr[i] = 1;
	}
	for(int i = 2; i < sqrt(N); i++){
		if(arr[i]){
			for(int j = 0; i * (j + 2) < N; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}
	return;
}

int main(){
	int i,j=0,n,pn;
	while(cin>>n){
		pn=0;
		Eratosthenes();
		for(i=2 ; i<=n ; i++){
			if(arr[i]==1) pn++;
		}
		cout << pn << endl;
		
	}
	return 0;
}