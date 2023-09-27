#include <iostream>
using namespace std;
int n;

struct Card
{
	int s:8;
	int i:24;
	int v;
};

Card A[100000];

	
int part(int q, int r)
{
	Card x=A[r];
	int j=A[q].v<=x.v?q+1:q;
	for(int i=q+1;i<r;i++)
	{
		if (A[i].v<=x.v)
		{
			Card aj=A[j];
			A[j]=A[i];
			A[i]=aj;
			j++;
		}
	}
	A[r]=A[j];
	A[j]=x;
	return j;
}

void sort(int q, int r)
{
//	cout << q <<' '<<r<<endl;
	if (q>=r) return;
	int p=part(q,r);
//	cout<<p<<endl;
	sort(q,p-1);
	sort(p+1,r);
}

bool stable()
{
	for (int i=0;i<n;i++)
	{
		if (A[i].v==A[i+1].v)
		{
			if(A[i].i>A[i+1].i)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	cin >>n;
	for(int i=0;i<n;i++){
		A[i].i=i;
		char s;
		cin>>s; A[i].s = s;
		cin>>A[i].v;
	}
	
	sort(0,n-1);
	
	cout << (stable() ? "Stable":"Not stable")<<endl;

	for(int i=0;i<n;i++){
		cout<<(char)A[i].s<<' '<<A[i].v<<endl;
	}
}