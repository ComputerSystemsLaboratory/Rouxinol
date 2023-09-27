#include<stdio.h>
long long int merge(int a[], int left,int mid, int right){
	long long int inv = 0;
	int b[right+1];//array
	int i = left;
	int j = mid;
	for(int k=left; k<=right; k++){
		//if left left and (no right || a[])
		if(i<mid && (j>right||a[i]<a[j])){
			b[k] = a[i++];
		}
		else{
			b[k] = a[j++];
			inv = inv + (mid-i);
		}
		
	}
	for(int k = left; k<=right; k++)
		a[k] = b[k];
	//printf("%d\n", inv);
	return inv;
}

long long int divide(int a[], int left, int right){
	long long int inv = 0;
	if(left>=right) return inv;
	int mid = (left+right)/2;
	inv = divide(a,left,mid);
	inv += divide(a,mid+1,right);
	inv = inv + merge(a,left,mid+1,right);
	return inv;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0; i<n;i++) scanf("%d",&a[i]);
	long long int res = divide(a,0,n-1);
	printf("%lld\n",res);
	  
	return 0;
} 
