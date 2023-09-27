#include <iostream>
#include <string>
using namespace std;

int main(){
	int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},m,d,sum=0;
	string str[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	while(cin>>m>>d,m+d){
		sum=0;
		for(int i=1;i<m;i++){
			sum+=month[i];
		}
	sum+=d;
	cout<<str[sum%=7]<<endl;;
	}
}