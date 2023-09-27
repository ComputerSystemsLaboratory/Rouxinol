#include <iostream>
#define INF 2000000000
using namespace std;

struct Card{
	char s;
	int n;
};

Card L[50002],R[50002];

void merge(Card a[],int l,int m,int r){
	int n1=m-l;
	int n2=r-m;
	for(int i=0;i<n1;i++)
		L[i]=a[l+i];
	for(int i=0;i<n2;i++)
		R[i]=a[m+i];
	L[n1].n=INF;
	R[n2].n=INF;
	int i=0,j=0;
	for(int k=l;k<r;k++){
		if(L[i].n<=R[j].n)
			a[k]=L[i++];
		else
			a[k]=R[j++];
	}
}

void mergesort(Card a[],int l,int r){
	if(l+1<r){
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m,r);
		merge(a,l,m,r);
	}
}

int partition(Card a[],int p,int r){
	Card x=a[r],tmp;
	int i=p-1;
	for(int j=p;j<r;j++){
		if(a[j].n<=x.n){
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;
}

void quicksort(Card a[],int l,int r){
	if(l>=r)
		return ;
	int m=partition(a,l,r);
	quicksort(a,l,m-1);
	quicksort(a,m+1,r);
}

int main(){
	int n;
	Card a[100000],b[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		char s[3];
		int x;
		cin>>s>>x;
		a[i].s=b[i].s=s[0];
		a[i].n=b[i].n=x;
	}
	mergesort(a,0,n);
	quicksort(b,0,n-1);
	bool f=true;
	for(int i=0;i<n;i++)
		if(a[i].s!=b[i].s){
			f=false;
			break;
		}
	cout<<(f?"Stable":"Not stable")<<endl;
	for(int i=0;i<n;i++)
		cout<<b[i].s<<' '<<b[i].n<<endl;
	return 0;
}