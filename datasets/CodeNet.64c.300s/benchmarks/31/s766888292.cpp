#include<iostream>
using namespace std;

int main()
{
	int test1[31],test2[31];
	
	for(int i=0;i<28;i++){
		cin>>test1[i];
	}
	for(int i=1;i<31;i++){
		test2[i]=0;
	}
	for(int p=0;p<28;p++){
		for(int y=1;y<31;y++){
			if(test1[p]==y){
				test2[y]=1;
			}
		}
	}
	for(int r=1;r<31;r++){
		if(test2[r]==0){
			cout<<r;
			cout<<"\n";
		}
	}
	return 0;
}