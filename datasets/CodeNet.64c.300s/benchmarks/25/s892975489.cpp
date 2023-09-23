/*AOJ 0025*/

#include<iostream>

using namespace std;

int Hit(int *a,int *b){
	int sum=0;

	for(int i=0;i<4;i++){
		if(a[i] == b[i]){
			sum++;
		}
	}

	return sum;
}

int Blow(int *a,int *b){

	int sum = 0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				continue;
			}
			if(a[i] == b[j]){
				sum++;
				break;
			}
		}
	}

	return sum;
}

int main(){

	int a[4],b[4];

	while(cin>>a[0]){
		for(int i=1;i<4;i++){
			cin>>a[i];
		}
		for(int i=0;i<4;i++){
			cin>>b[i];
		}

		cout<<Hit(a,b)<<" "<<Blow(a,b)<<endl;
	}

	return 0;
}