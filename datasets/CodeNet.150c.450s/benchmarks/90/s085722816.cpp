/*AOJ 0028*/

#include<iostream>
using namespace std;

#define FOR(i,n) for(int i=0;i<n;i++)

int main(){

	int data[100];
	int num;
	int max=0;

	FOR(i,100){
		data[i] = 0;
	}

	while(cin>>num){
		
		if(num == 0){
			break;
		}
		data[num-1]++;
	}

	FOR(i,100){
		if(max<=data[i]){
			max = data[i];
		}
	}

	FOR(i,100){
		if(data[i] == max){
			cout<<i+1<<endl;
		}
	}

	return 0;
}