#include <iostream>

using namespace std;

int main(){
	int flag[30]={};
	for(int i=0;i<28;i++){
		int val;
		cin>>val;
		flag[val-1]=1;
	}
	for(int i=0;i<30;i++){
		if(flag[i]==0){
			cout<<i+1<<endl;
		}
	}
	return 0;
}