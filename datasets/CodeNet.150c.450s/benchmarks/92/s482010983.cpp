#include<iostream>
using namespace std;

int main(){
	int sum,j;
	int i=0;
	int N =200;
	
	int a[N], b[N], dig[N];
	
	while(cin >> a[i] >> b[i]){
		dig[i]=1;
		if(0<=a[i] && a[i]<=1000000 && 0<=b[i] && b[i]<=1000000){
			sum = a[i]+b[i];
			while(sum/10 != 0){
				sum = sum/10;
				dig[i] += 1;
			}
			i++;
		}
	}
	
	for(j=0; j<i; j++){
		cout << dig[j] << "\n";
	}
}