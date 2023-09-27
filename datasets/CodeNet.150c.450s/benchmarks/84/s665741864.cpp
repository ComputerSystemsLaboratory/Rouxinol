#include <stdio.h>
int a[1000000];
long long int ans=0;
void mergesort(int l,int r){
	if(l==r)return;
	if(l==r-1){
		if(a[r]<a[l]){
			int temp;
			temp=a[l];
			a[l]=a[r];
			a[r]=temp;
			ans++;
		}
		return;
	}
	int mid=(l+r)/2,now=0,b[r-l+1];
	mergesort(l,mid-1);
	mergesort(mid,r);
	for(int i=0;i<=r-l;i++){
	if(a[l+i-now]<a[mid+now]){
		b[i]=a[i+l-now];
		if(i+l-now==mid-1){
			for(i++;i<=r-l;i++)b[i]=a[i+l];
		}
	}
	else{
		ans+=mid-i+now-l;
		b[i]=a[mid+now];
		now++;
		if(mid+now>r){
			for(i++;i<=r-l;i++){
				b[i]=a[i+l-now];
			}
		}
	}
	}
	for(int i=0;i<=r-l;i++)a[i+l]=b[i];
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	mergesort(0,n-1);
	printf("%lld\n",ans);
}