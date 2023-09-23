#include<iostream>
using namespace std;
int main(void)
{
	int i=0,x;
	while(1){
		i=i+1;
		cin>>x;
		if(x==0) break;
		cout<<"Case"<<" "<<i<<":"<<" "<<x<<endl;
	}
	return 0;
}
