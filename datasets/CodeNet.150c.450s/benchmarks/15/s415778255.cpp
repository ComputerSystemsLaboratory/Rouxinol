#include <iostream>
using namespace std;
int num=0;
int liner_search(int x,int S[],int N){
	int n=0;
	while(n<N && S[n]!=x){
		n++;
	}
	if(n<N){
		++num;
		return n;
	}
	else
		return -1;
}
int main(){
	
	int num1;
	cin>>num1;
	int a[num1];
	for(int i=0;i<num1;i++)
		cin>>a[i];
	int num2;
	cin>>num2;
	int b[num2];
	for(int i=0;i<num2;i++)
		cin>>b[i];
	int x[num2];
	for(int i=0;i<num2;i++){
		x[i]=liner_search(b[i],a,num1-1);
	}
	cout<<num<<endl;
	
	return 0;
}