#include<iostream>

using namespace std;

int main()
{
	int n,money=100000;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		money*=1.05;
		if(money%1000>0){
			money+=1000;
			money-=money%1000;
		}
	}
	cout<<money<<endl;
	return 0;
}