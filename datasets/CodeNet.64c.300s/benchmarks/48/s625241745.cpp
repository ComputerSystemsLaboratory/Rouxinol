#include<iostream>
#include<cstring> 
using namespace std;
bool a[10000000];
int main()
{
	int n;
	while(cin>>n)
	{	
		int js=0;
		for (int i=2;i<=n;i++)
		  if (!a[i]) {js++;for (int j=i+i;j<=n;j+=i) a[j]=true;}
		cout<<js<<endl;   
	}
} 
