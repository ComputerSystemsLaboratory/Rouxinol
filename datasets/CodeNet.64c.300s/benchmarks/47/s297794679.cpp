#include<iostream>

using namespace std;

int main()
{
	int a[101]={0};
	int n;
	int c=0;
	while(cin>>n){
		a[n]++;
		if(c<a[n])
			c=a[n];
	}
	for(int i=1;i<101;i++)
		if(a[i]==c)
			cout<<i<<endl;
	return 0;
}