#include <iostream>  
#include <cstdio>  
#include <algorithm>
#define N 500001
using namespace std;
long long ti=0;
long long a[N];
long long b[N];
void m(long long a[],long long b[], int l, int m, int e)
{
    int i = l, j=m+1, k = l;
    while(i!=m+1 && j!=e+1)
    {
        if(a[i] > a[j]){
        	b[k++] = a[j++];
        	ti+=m-i+1;
		}
            
        else
            b[k++] = a[i++];
    }
    while(i != m+1)
        b[k++] = a[i++];
    while(j != e+1)
        b[k++] = a[j++];
    for(i=l; i<=e; i++)
        a[i] = b[i];
}
void msort(long long a[], long long b[], int l, int e)
{
    int mi;
    if(l < e)
    {
        mi = (l + e) / 2;
        msort(a, b, l, mi);
        msort(a, b, mi+1, e);
        m(a, b, l, mi, e);
    }
}
 
int main() { 
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	msort(a,b,0,n-1);
	cout<<ti<<endl;
    return 0;  
} 