#include <iostream>
#include <cstdio>

using namespace std;

int pow(int a)
{
	return a*a;
}

int main(void)
{
	int n,sum;
	while (scanf("%d",&n)!=EOF) {
		sum=0;
		for(int i=1;i<(600/n);i++){
			sum+=pow(n*i)*n;
		}
		
		cout<<sum<<endl;
	}
	
	return (0);
}