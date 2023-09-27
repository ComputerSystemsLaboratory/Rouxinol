#include<iostream>
using namespace std;
int main(){
	int i=0,count=0,number[100];
	cin>>i;
	for(;count<i;count++){
		cin>>number[count];
	}
	for(;count>0;count--){
		cout<<number[count-1];
		if(count==1){break;}
		cout<<' ';
	}
	cout<<endl;
	return 0;
}