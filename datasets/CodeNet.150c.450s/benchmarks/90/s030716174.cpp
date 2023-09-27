#include<iostream>
using namespace std;

int main(){
	int num[100] = {0}, max = 0, input;
	while(cin>>input){
		num[input-1]++;
	}
	for(int i=0;i<100;i++){
		if(max<num[i])
			max = num[i];
	}
	for(int i=0;i<100;i++){
		if(max == num[i])
			cout << i+1 << endl;
	}
	return 0;
}