#include<iostream>

using namespace std;

int main(){

	int N,max=1,min=1;
	long long c=0;

	while(1){

		cin>>N;

		if(N==0) break;

		max=1,min=1;
		c=0;
		while(min<=max){
			int num=(max+min)*(max-min+1)*1/2;
			if(num==N) c++,min++,max++;
			else if(num<N) max++;
			else min++;
		}
		c--;

		cout<<c<<endl;
	}
}