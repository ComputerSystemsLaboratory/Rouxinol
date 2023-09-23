#include<iostream>
using namespace std;

int main(){
int a,b,sum,i;
while(cin>>a>>b){
	i=0;
	sum=a+b;
	while(1){
		i++;
		sum=sum/10;
		if(sum<1)break;
	}
	cout<<i<<endl;
}
return 0;
}