#include<iostream>
#include<algorithm>
#include<complex>
#include<iomanip>
using namespace std;
int main(){
	int x;
	int t=90000;
	for(int i=t;i;i--){
		for(int j=i;j;j--){
			if(i+j==2)cin>>x;
		}
	}
	cout<<x*x*x<<endl;
	return 0;
}