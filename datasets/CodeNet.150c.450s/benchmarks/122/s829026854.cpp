#include <iostream>
using namespace std;
const int SIZE=2000000;
const int INFTY=2000000050;

int A[SIZE+1];
int H;//heapsize

void maxheap(int u)
{
	int l=u*2,r=u*2+1,lar;
	int sto;
	
	if(l<=H&&A[l]>A[u])lar=l;
	else lar=u;
	if(r<=H&&A[r]>A[lar])lar=r;
	
	if(lar!=u)
	{
		sto=A[u];
		A[u]=A[lar];
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

int extract()
{
	if(H<1)return -INFTY;
	int maxv=A[1];
	A[1]=A[H--];
	maxheap(1);
	return maxv;
}

void increasekey(int u,int key)
{
	if(key<A[u])return;
	A[u]=key;
	int sto;
	while(u>1&&A[u/2]<A[u])
	{
		sto=A[u];
		A[u]=A[u/2];
		A[u/2]=sto;
		u/=2;
	}
	return;
}

void insert(int key)
{
	A[++H]=-INFTY;
	increasekey(H,key);
	return;
}

int main() {
	string s;int n;
	while(cin>>s&&s!="end")
	{
		if(s=="insert")
		{
			cin>>n;
			insert(n);
		}
		else if(s=="extract")cout<<extract()<<endl;
	}
	return 0;
}