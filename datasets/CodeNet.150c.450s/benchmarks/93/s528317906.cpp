#include<cstdio>
#define MAX 100001
#define INF 2000000000

struct Card
{
	char suit;
	int value;
};

Card L[MAX/2+1];
Card R[MAX/2+1];

void merge(Card* A,int l,int mid,int r)
{
	int n1=mid-l;
	int n2=r-mid;
	int i,j;

	for (i = 0; i < n1; ++i)
	{
		L[i]=A[l+i];

	}

	for (i = 0; i < n2; ++i)
	{
		R[i]=A[mid+i];
	}

	L[n1].value=INF;
	R[n2].value=INF;

	i=0;
	j=0;

	for (int k= l; k < r; ++k)
	{
		
		if (L[i].value>R[j].value)
		{
			A[k]=R[j++];
		}
		else
		{
			A[k]=L[i++];
		}
	}
}

void mergeSort(Card* A,int l,int r)
{
	if (l+1==r)
		return;

	int mid=(l+r)/2;
	mergeSort(A,l,mid);
	mergeSort(A,mid,r);
	merge(A,l,mid,r);
}

int partition(Card *A,int p,int r)
{
	int j=p;
	Card t;
	for (int i = p; i < r-1; ++i)
	{
		if (A[i].value<=A[r-1].value)
		{
			t=A[i];
			A[i]=A[j];
			A[j++]=t;
		}
	}
	t=A[j];
	A[j]=A[r-1];
	A[r-1]=t;
	return j;
}

void quickSort(Card *A,int p,int r)
{
	if (r<=p)
	{
		return;
	}

	int pivot=partition(A,p,r);
	quickSort(A,p,pivot);
	quickSort(A,pivot+1,r);
}

int main()
{
	int n,i,v;
	Card A[MAX],B[MAX];

	int stable=1;
	char s[10];

	scanf("%d",&n);

	for (i = 0; i < n; ++i)
	{
		scanf("%s %d",s,&v);
		A[i].suit=B[i].suit=s[0];
		A[i].value=B[i].value=v;
	}

	mergeSort(A,0,n);
	quickSort(B,0,n);

	for (int i = 0; i < n; ++i)
	{
		if (A[i].suit!=B[i].suit)
		{
			stable=0;
			break;
		}
	}
	if (stable)
	{
		printf("Stable\n");
	}
	else
		printf("Not stable\n");

	for (i = 0; i < n; ++i)
	{
		printf("%c %d\n",B[i].suit,B[i].value);
	}
	return 0;
}
