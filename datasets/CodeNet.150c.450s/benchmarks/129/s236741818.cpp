#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	int r,c,rc[202][202],rsum[101][101],csum[101],rcsum;
	
	rcsum=0;
	
	for(int i=0;i<101;i++)
	{
		for(int j=0;j<101;j++)
		{
			rsum[i][j]=0;
		}
	}
	
	for(int i=0;i<c;i++)
	{
		csum[i]=0;
	
	}
	
	cin >> r >> c;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin >> rc[i][j];
		}
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			rsum[i][c+1]+=rc[i][j];
			rcsum+=rc[i][j];
		}
	}
	
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			csum[i]+=rc[j][i];


		}
		
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout << rc[i][j] << " ";
		}
			cout << rsum[i][c+1];
		cout << "\n";
		
	}
	

	
		for(int i=0;i<c;i++)
		{
			cout << csum[i] << " ";
		}	
	cout << rcsum << "\n";
	
return 0;
}