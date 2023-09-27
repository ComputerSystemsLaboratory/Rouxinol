#include <iostream>
using namespace std;

int main() {
	int m[100][100]={};
	int n,k,v,d;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>d>>k;d--;
		for(int j=0;j<k;j++)
		{
			cin>>v;
			m[d][--v]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
	{
		if(j)cout<<" ";cout<<m[i][j];
	}cout<<endl;
	}
	return 0;
}