#include<iostream>
using namespace std;
int s[10004];
int cnt,n;
void find(int s[],int num)
{
	for(int i=0;i<n;i++)
	{
		if(s[i]==num)
		{
			cnt++;
			break;
		}	
	}
}
int main()
{
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>s[k];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int nn;
		cin>>nn;
		find(s,nn);
		
	} 
	cout<<cnt<<endl;
	return 0;
}
