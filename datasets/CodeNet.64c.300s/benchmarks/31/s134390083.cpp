#include<iostream>
using namespace std;

int main(){
	int num[30] = {0}, i,a;
	for(i=0;i<28;i++){
		cin>>a;
		num[a-1]++;
	}
	for(i=0;i<30;i++){
		if(num[i] == 0)cout << i+1 << endl;
	}
	return 0;
}