#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[5];
	for(int i=1;i<6;i++){
		cin>>a[i];
	}
	sort(a+1,a+6);
	for(int i=5;i>0;i--){
		if(i==1)cout<<a[i];
		else cout<<a[i]<<' ';
		
}
	cout<<endl;
}