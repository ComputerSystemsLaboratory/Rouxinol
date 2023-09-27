#include<iostream>
using namespace std;

int main(){
	int a[100]={0};int n=0;
	while(cin>>a[n++]);n--;
	int b[10]={0};
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			cout<<b[0]<<endl;
			for(int j=0;j<9;j++)
			{
				b[j]=b[j+1];
			}
		}else
		{
			for(int j=9;j>0;j--)
			{
				b[j]=b[j-1];
			}
			b[0]=a[i];
		}
	}
	return 0;
}