#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int num[5]={0},i;
	for(i=0;i<5;i++){
		cin>>num[i];
	}
	sort(num,num+5);
	for(i=0;i<5;i++){
		cout<<num[4-i];
		if(i!=4){
			cout<<' '; 
		}
	}
	cout<<endl;
	return 0;
}