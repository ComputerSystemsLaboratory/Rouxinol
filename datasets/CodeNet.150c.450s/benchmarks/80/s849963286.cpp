#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[4],b[4];
	int ad=0;
	for(int i=0;i<4;i++){
		cin>>a[i];
		ad+=a[i];
	}
	int bd=0;
	for(int j=0;j<4;j++){
		cin>>b[j];
		bd+=b[j];
	}
	if(ad>=bd)
		cout<<ad<<endl;
	else
		cout<<bd<<endl;
	return 0;
}