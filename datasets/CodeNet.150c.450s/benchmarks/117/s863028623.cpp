#include <iostream>  
#include <cstdio>  
#include <algorithm>
#define N 500001
using namespace std;
long long ti=0;
long long a[N];
long long li[N];
long long ri[N]; 
void m(long long a[],long long l,long long m,long long r){
	long long n=m-l;
	long long c=r-m;
	for(long long i=0;i<n;i++)li[i]=a[i+l];
	for(long long i=0;i<c;i++)ri[i]=a[i+m]; 
	li[n]=10000000001;
	ri[c]=10000000001;
	long long i=0,j=0;
	for(long long k=l;k<r;k++){
		ti++;
		if(li[i]<=ri[j]){
			a[k]=li[i];
			i++;
		}else{
			a[k]=ri[j];
			j++;
		}
		//cout<<a[k]<<li[i]<<ri[j]<<"\n";
 }
	return;
}
void msort(long long a[],long long l,long long r){
	if(l+1<r){
		long long mid=l+r;
		mid/=2;
		msort(a,l,mid);
		msort(a,mid,r);
		m(a,l,mid,r);
	} 
	return;
}
int main() { 
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	msort(a,0,n);
	for(long long i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n-1]);
	cout<<ti<<endl;
    return 0;  
} 