#include <iostream>
#include <vector>
#define N 1000000
using namespace std;

int main(void){
	int n;
	int i,j;
	int count;
	vector<int> prime(N);

	for(i=0;i<N;i++){
		if(i%2==0||i==1) prime.at(i)=0;
		else prime.at(i)=1;
	}
	prime.at(2)=1;
	for(i=3;i<(N/2);i+=2){
		if(prime.at(i)==1){
			for(j=2;i*j<N;j++){
				prime.at(i*j)=0;
			}
		}
	}
	while(cin >> n){
		count=0;
		for(i=2;i<=n;i++){
			if(prime.at(i)==1) count++;
		}
		cout << count << endl;
	}
	return 0;
}