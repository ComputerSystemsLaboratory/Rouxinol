#include<iostream>
using namespace std;

int main(){
	int num;
	int a[3];
	int max;
	int max_no;
	int sum;
	cin>>num;
	for(int i=0;i<num;i++){
	cin>> a[0]>> a[1]>> a[2];
	max=a[0];
	max_no=0;
	sum=0;
	for(int j=0;j<2;j++){
	if(max<a[j+1]){
	max=a[j+1];
	max_no=j+1;
	}
	}
	for(int j=0;j<3;j++){
		if(j!=max_no){
		sum+=a[j]*a[j];
		}
	}
	if(sum==max*max){
		cout<< "YES"<<endl;
	}else{
		cout<< "NO"<<endl;
	}
	}
	return 0;
}