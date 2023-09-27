#include <cstdio>
#include <cstring>
using namespace std;
#define swap(a,b)	if(a!=b){ a^=b;	b^=a;	a^=b; }
#define INFINITY 1e9+1
int n;

void cswap(char* a,char* b){
	char tem=*a;	*a=*b;	*b=tem;
}

void quicksort(int a[],char s[],int p,int r){
	if(p<r){
		//partition(a,p,r)
		int x=a[r];
		int i=p;
		for(int j=p;j<r;j++){
			if(a[j]<=x){
				swap(a[i],a[j]);
				cswap(&s[i],&s[j]);
				i++;
			}
		}
		swap(a[i],a[r]);
		cswap(&s[i],&s[r]);
		//q=i(return);
		if(i-p>=2)	quicksort(a,s,p,i-1);
		if(r-i>=2)	quicksort(a,s,i+1,r);
	}
}

void mergesort(int a[],char s[],int left,int right){
	if(left+1>=right)	return;
	int mid=(left+right)/2;
	mergesort(a,s,left,mid);	mergesort(a,s,mid,right);
	int ln=mid-left,rn=right-mid;
	int ll[ln+1],rr[rn+1];
	char lc[ln+1],rc[rn+1];
	for(int i=0;i<ln;i++){
		ll[i]=a[left+i];	lc[i]=s[left+i];
	}
	for(int i=0;i<rn;i++){
		rr[i]=a[mid+i];	rc[i]=s[mid+i];
	}
	ll[ln]=INFINITY;	rr[rn]=INFINITY;	lc[ln]='\0';	rc[rn]='\0';
	
	int lco=0,rco=0;
	for(int i=left;i<right;i++){
		if(ll[lco]<=rr[rco]){
			a[i]=ll[lco];	s[i]=lc[lco++];
		}
		else{
			a[i]=rr[rco];	s[i]=rc[rco++];
		}
	}
}
			
	
	
int main(){
	scanf("%d",&n);
	int num[n];	char suit[n];
	int num2[n];	char suit2[n];
	for(int i=0;i<n;i++){
		scanf(" %c %d",&suit[i],&num[i]);
		num2[i]=num[i];	suit2[i]=suit[i];
	}
	quicksort(num,suit,0,n-1);
	mergesort(num2,suit2,0,n);
	suit[n]='\0';	suit2[n]='\0';
	if(strcmp(suit,suit2)==0)	printf("Stable\n");
	else 	printf("Not stable\n");
	for(int i=0;i<n;i++)	printf("%c %d\n",suit[i],num[i]);
	return 0;
}