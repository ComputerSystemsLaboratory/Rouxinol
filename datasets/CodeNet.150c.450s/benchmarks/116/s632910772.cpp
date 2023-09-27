#include<iostream>
#define MIN -1000000000000000000
using namespace std;

int input[100010];

int main() {
	while(1){
		int N,K;
		long long int sum=0,nummax=MIN;
		cin >> N >> K;
		if(N==0 && K==0)break;
		
		for(int i=0;i<100010;i++)input[i]=0;
		
		for(int i=0;i<N;i++){
			cin >> input[i];
			sum+=input[i];
			if(i+1>=K){
				sum-=input[i-K];
				if(nummax<sum)nummax=sum;
			}
		}
		cout << nummax <<endl;
	}
	return 0;
}