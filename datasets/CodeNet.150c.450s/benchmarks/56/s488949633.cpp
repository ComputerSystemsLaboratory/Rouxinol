#include <iostream>
using namespace std;

long long sum(int size,int ary[]);
int min(int size,int ary[]);
int max(int size,int ary[]);
int main(){
	int size=0;
	cin >>size;
	int nums[size];
	for(int i=0;i<size;i++){
		cin >> nums[i];
	}
	
	int a=0,b=0;
	long long c=0;
	a=min(size,nums);
	b=max(size,nums);
	c=sum(size,nums);
	cout <<a<<" "<<b<<" "<<c<<endl;

	return 0;	
}

long long sum(int size,int ary[]){
	long long ret=0;
	for(int i=0;i<size;i++){
		ret +=ary[i];
	}
	return ret;
}

int min(int size,int ary[]){
	int ret=ary[0];
	for(int i=1;i<size;i++){
		if(ary[i]<ret) ret = ary[i];
	}
	return ret;
}

int max(int size,int ary[]){
	int ret=ary[0];
	for(int i=1;i<size;i++){
		if(ary[i]>ret) ret = ary[i];
	}
	return ret;
}