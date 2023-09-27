#include <stdio.h>
int a[1000000];
long long int ans;
void mergesort(int l,int r){
	if(l==r)return;
	if(l==r-1){
		ans+=2;
		if(a[r]<a[l]){
			int temp;
			temp=a[l];
			a[l]=a[r];
			a[r]=temp;
		}
		return;
	}
	int mid=(l+r)/2,now=0,b[r-l+1];
	mergesort(l,mid);
	mergesort(mid+1,r);
	for(int i=0;i<=r-l;i++){
	if(a[l+i-now]<a[mid+1+now]){
		b[i]=a[i+l-now];
		if(i+l-now==mid){
			for(i++;i<=r-l;i++)b[i]=a[i+l];
		}
	}
	else{
		b[i]=a[mid+1+now];
		now++;
		if(mid+now==r){
			for(i++;i<=r-l;i++){
				b[i]=a[i+l-now];
			}
		}
	}
	}
	for(int i=0;i<=r-l;i++){
		a[i+l]=b[i];
	}
	ans+=r-l+1;
}
int main(){
	int n;	
scanf("%d",&n);
ans=0;
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	mergesort(0,n-1);
	printf("%d",a[0]);
	for(int i=1;i<n;i++)printf("% d",a[i]);
	printf("\n%lld\n",ans);
}