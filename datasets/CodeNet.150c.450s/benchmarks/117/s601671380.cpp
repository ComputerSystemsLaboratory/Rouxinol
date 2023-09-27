

#define MAXN (500000+50)

#include<iostream>

using namespace std;

int arr[MAXN];
int exc[MAXN];

int N;
int T(0);

void msort(int l,int r)
{
	int mid((l+r)>>1);
	if(r-l<=1)
		return;
	msort(l,mid);
	msort(mid,r);
	int p1(mid-1),p2(r-1);
	for(int i=r-1;i>=l;--i)
	{//++T;
		if(p1<l)
		{
			exc[i]=arr[p2--];
			continue;
		}
		if(p2<mid)
		{
			exc[i]=arr[p1--];
			continue;
		}
		if(arr[p1]<arr[p2])
			exc[i]=arr[p1--];
		else
			exc[i]=arr[p2--];
	}
	for(int i=l;i<r;++i)
	{
		++T;
		arr[i]=exc[i];
	}
}
int main()
{
	cin>>N;
	for(int i=0;i<N;++i)
		cin>>arr[i];
	msort(0,N);
	for(int i=N-1;i>0;--i)
		cout<<arr[i]<<' ';cout<<arr[0]<<endl;
	cout<<T<<endl;
	return 0;
}