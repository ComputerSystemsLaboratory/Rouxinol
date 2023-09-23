#include <iostream>
using namespace std;


void swap(int i,int j){
	static int temp=0;
	temp=i;
	i=j;
	j=temp;
}

int main() {
	// your code goes here
	int n,counter=0,temp;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		num[i]=0;
	}
	for(int i=0; i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=n-1;i<j;j--){
			if(num[j]<num[j-1]){
				temp=num[j];
				num[j]=num[j-1];
				num[j-1]=temp;
				counter++;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<num[i];
		if(i==n-1){
			break;
		}
		cout<<" ";
	}
	cout<<endl<<counter<<endl;
	return 0;
}