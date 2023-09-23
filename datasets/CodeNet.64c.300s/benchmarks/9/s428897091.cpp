#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=100000;
	for(int i=0;i<n;i++){
		cnt=cnt*1.05;
		if((cnt%1000)>0){
			cnt+=1000;
			cnt-=(cnt%1000);
		}
	}
	cout<<cnt<<endl;
return 0;
}