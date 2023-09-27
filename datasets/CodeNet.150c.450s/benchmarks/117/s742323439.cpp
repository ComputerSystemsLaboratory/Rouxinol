#include<iostream>
#define MAXN 1000000+20 
using namespace std;
int n,a[MAXN],t[MAXN];
int tot;

void msort(int l,int r){
	if (l < r-1){
		int mid=l+(r-l)/2;
		int now=l;
		int p=l,q=mid;
		
		msort(l,mid);
		msort(mid,r);
		
		while (p < mid || q < r){
			tot++;
			if (p < mid && a[p] < a[q] || q == r) {
				t[now++]=a[p++];
			}
			else t[now++]=a[q++];
		}
		for (int i = l;i < now;++i)
			a[i]=t[i];
	}
}

int main(){
	int i;
	cin>>n;
	for (i = 0;i < n;++i){
		cin>>a[i];
	}
	
	msort(0,n);
	
	for (i = 0;i < n;++i){
		if (i) cout<<" ";
		cout<<a[i];
	}
	
	cout<<endl;
	cout<<tot<<endl;
	return 0;
}