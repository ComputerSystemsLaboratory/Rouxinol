#include <iostream>

using namespace std;

int main()
{
    int w, n;
	char dummy;
    cin>>w;
	cin>>n;
	int *data = new int [w];
	int *a = new int [n];
	int *b = new int [n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>dummy>>b[i];
	}
	for(int i=0;i<w;++i)
	{
		data[i]=i+1;
	}
	for(int i=0;i<n;++i)
	{
		swap(data[a[i]-1],data[b[i]-1]);
	}
	for(int i=0;i<w;++i)
	{
		cout<<data[i]<<endl;
	}
}