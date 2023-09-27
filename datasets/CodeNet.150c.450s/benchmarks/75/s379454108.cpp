#include <iostream>
using namespace std;
const int SIZE=500000;

int A[SIZE+1];
int H;//heapsize

void maxheap(int v)
{
	int l=v*2,r=v*2+1,lar;
	int sto;
	
	if(l<=H&&A[l]>A[v])lar=l;
	else lar=v;
	if(r<=H&&A[r]>A[lar])lar=r;
	
	if(lar!=v)
	{
		sto=A[v];
		A[v]=A[lar];
		A[lar]=sto;
		maxheap(lar);
	}
	return;
}

void buildmaxh()
{
	for(int i=H/2;i>=1;i--)maxheap(i);
	return;
}

int main() {
	cin>>H;
	for(int i=1;i<=H;i++)cin>>A[i];
	buildmaxh();
	for(int i=1;i<=H;i++)cout<<" "<<A[i];
	cout<<endl;
	return 0;
}