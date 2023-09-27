#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	int sum;
	int i;
	while(1){
		cin>>n;
		if(cin.eof())	break;
		sum=0;
		for(i=n;i<=600;i+=n){
			sum+=n*pow((i-n),2);
		}
		cout<<sum<<endl;
	}
	return 0;
}

