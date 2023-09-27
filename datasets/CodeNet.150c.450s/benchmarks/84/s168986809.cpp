#include <iostream>
#include <cstdio>
using namespace std;
	
const int maxn = 200000+5;

int n;
int a[maxn];
long long ans = 0;

void Merge(int left,int right,int mid){
	int Q[maxn],cnt = 0;
	int i,j;
	for(i = left,j = mid+1;i <= mid && j <= right;){
		if(a[i] <= a[j])Q[++cnt] = a[i],i++;
		else Q[++cnt] = a[j],j++,ans+=mid-i+1;
	}
	while(i <= mid)Q[++cnt] = a[i++];
	while(j <= right)Q[++cnt] = a[j++];
	for(int i = left,j = 1;i <= right;)a[i++] = Q[j++];
}

void Merge_Sort(int left,int right){
	int mid = (left+right)>>1;
	if(left >= right)return;
	Merge_Sort(left,mid);
	Merge_Sort(mid+1,right);
	Merge(left,right,mid);
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n; i++)scanf("%d",&a[i]);
	Merge_Sort(1,n);
	printf("%lld\n",ans);
}