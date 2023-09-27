#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAXN=500100;
int A[MAXN],T[MAXN];
int n;
int tot;
void input()
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}

void merge_sort(int l,int r)
{
	if(l==r) return;
	int mid=(l+r)/2;
	merge_sort(l,mid);
	merge_sort(mid+1,r);
	int x(l),y(mid+1),q(l);
	while(q<=r)
	{
		if((x<=mid && A[x]<=A[y]) || y>r) {T[q]=A[x];q++;x++;}
		else {T[q]=A[y];q++;y++;}
		tot++;
	}
	for(int i=l;i<=r;i++) A[i]=T[i];
}

void xxj()
{
	merge_sort(0,n-1);
}

void output()
{
	for(int i=0;i<n-1;i++)
	    cout<<A[i]<<' ';
    cout<<A[n-1]<<endl;
    cout<<tot<<endl;
}

int main()
{
	input();
	xxj();
	output();
	return 0;
}