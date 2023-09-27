#include<iostream>
using namespace std;
const int INF=2000000000;
const int SIZE=100000;

int L[SIZE/2+2][2],R[SIZE/2+2][2];

void merge(int A[][2],int left,int mid,int right)
{
	int n1=mid-left;
	int n2=right-mid;
	int i,j;
	for(i=0;i<n1;i++)
	{
		L[i][0]=A[left+i][0];
		L[i][1]=A[left+i][1];
	}
	for(i=0;i<n2;i++)
	{
		R[i][0]=A[mid+i][0];
		R[i][1]=A[mid+i][1];
	}
	L[n1][0]=R[n2][0]=INF;
	i=j=0;
	for(int k=left;k<right;k++)
	{
		if(L[i][0]<=R[j][0])
		{
			A[k][0]=L[i][0];
			A[k][1]=L[i++][1];
		}
		else
		{
			A[k][0]=R[j][0];
			A[k][1]=R[j++][1];
		}
	}
}

void mergesort(int A[][2],int left,int right)
{
	if(left+1<right)
	{
		int mid=(left+right)/2;
		mergesort(A,left,mid);
		mergesort(A,mid,right);
		merge(A,left,mid,right);
	}
}
int partition(int A[][2],int p,int r)
{
	int x=A[r][0];
	int i=p-1;
	int sto;
	for(int j=p;j<r;j++)
	{
		if(A[j][0]<=x)
		{
			sto=A[++i][0];
			A[i][0]=A[j][0];
			A[j][0]=sto;
			sto=A[i][1];
			A[i][1]=A[j][1];
			A[j][1]=sto;
		}
	}
	sto=A[++i][0];
	A[i][0]=A[r][0];
	A[r][0]=sto;
	sto=A[i][1];
	A[i][1]=A[r][1];
	A[r][1]=sto;
	return i;
}

void quicksort(int A[][2],int p,int r)//r is often n-1
{
	if(p<r)
	{
		int q=partition(A,p,r);
		quicksort(A,p,q-1);
		quicksort(A,q+1,r);
	}
	return;
}

int chai(char a)
{
	if(a=='S')return 0;
	else if(a=='H')return 1;
	else if(a=='C')return 2;
	else return 3;
}

char chac(int a)
{
	if(a==0)return 'S';
	else if(a==1)return 'H';
	else if(a==2)return 'C';
	else return 'D';
}

int main()
{
	int n;cin>>n;
	int A[SIZE][2],B[SIZE][2];
	int b;char c;
	for(int i=0;i<n;i++)
	{
		cin>>c>>b;
		A[i][0]=B[i][0]=b;
		A[i][1]=B[i][1]=chai(c);
	}
	
	mergesort(B,0,n);
	quicksort(A,0,n-1);
	
	bool flag=false;
	for(int i=0;i<n;i++)if(A[i][1]!=B[i][1]){flag=true;break;}
	
	if(flag)cout<<"Not stable"<<endl;
	else cout<<"Stable"<<endl;
	
	for(int i=0;i<n;i++)cout<<chac(A[i][1])<<" "<<A[i][0]<<endl;
	
	return 0;
}