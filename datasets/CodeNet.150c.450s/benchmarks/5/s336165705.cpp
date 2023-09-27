#include<iostream>
using namespace std;

int main(){
	int n, a ;
	cin >> n;
	int day[n];
	for(int i = 0; i < n; i++){
		cin >> a;
		day[i] = a;
	}
	for(int i = 0; i < n; i++){
		int b = n - i - 1;
		printf("%d", day[b]);
		if(b != 0){
			printf(" ");
		}	
	}
	printf("\n");
	return 0;
	 }
	