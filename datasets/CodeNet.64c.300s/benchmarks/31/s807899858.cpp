#include<iostream>
#include<cmath>
using namespace std;

int main(){
	bool submit[31];
	for(int i=0;i<31;i++)submit[i]=true;
	submit[0]=false;
	int n;
	for(int i=0;i<28;i++){
		cin>>n;
		submit[n]=false;
	}
	/*for(int i=1;i<31;i++)cout<<i<<" ";
	cout<<endl;*/
	for(int i=1;i<31;i++){
		//if(i>9)cout<<submit[i]<<"  ";
		if(submit[i])cout<<i<<endl;
	}
	return 0;
}