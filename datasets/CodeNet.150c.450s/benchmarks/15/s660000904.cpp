#include <iostream>
using namespace std;
int liner_search(int key,int A[],int n){
	int i=0;
	A[n]=key;
	while(A[i]!=key){
		i++;
	}
	if(i==n)
		return -1;
	else
		return i;
}
int main(){
	
	int num1;
	cin>>num1;
	int a[num1+1];
	for(int i=0;i<num1;i++)
		cin>>a[i];
	int num2;
	cin>>num2;
	int b[num2];
	for(int i=0;i<num2;i++)
		cin>>b[i];
	int num=0;
	for(int i=0;i<num2;i++){
		if(liner_search(b[i],a,num1)!=-1)
			num++;
	}
	cout<<num<<endl;
	
	return 0;
}