//
//  main.cpp

#include <iostream>
using namespace std;

long long max(long long x,long long y){
	if(x > y){
		return x;
	}else{
		return y;
	}
}

int main(){
	while(1){
		int n,k;
		long long array[100001]={};
		long long total[100001]={};
		cin >> n >> k;
		if(n == 0 && k == 0)break;
		for(int i=0;i<n;i++){
			cin >> array[i];
		}
		long long x=0;
		for(int i=0;i<k;i++){
			x += array[i];
		}
		total[0] = x;
		for(int i=1;i<=n-k;i++){
			total[i] = total[i-1] - array[i-1] + array[i+k - 1];
		}
		long long answer = -10000000000;
		for(int i=0;i<100001;i++){
			answer = max(answer,total[i]);
		}
		cout << answer << endl;
	}
	
	return 0;
}