#include<iostream>
using namespace std;
int main()
{
	int n,tag,minv,i,j;
	int *p;
	cin>>n;
	p = new int [n];
	for(i=0;i<n;i++)
		cin>>p[i];
	tag = p[1] - p[0];
	minv = p[0];
	for(i=1;i<n;i++)
	{
		if(p[i] - minv>tag)
		tag = p[i]-minv;
		if(minv>p[i])
		minv = p[i];
	}	
	cout<<tag<<endl;
	delete [] p;
	return 0;
 } 
