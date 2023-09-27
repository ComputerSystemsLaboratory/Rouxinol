#include <iostream>
#define INT_MAX (~(1<<31))
using namespace std;

int merge(int *a, int left, int mid, int right){
	int n1, n2, *l, *r, i, j, k, cnt;
	cnt = 0;
	n1 = mid - left;
	n2 = right - mid;
	l = new int[n1+1];
	r = new int[n2+1];
	for(i=0;i<n1;++i)l[i] = a[left+i];
	for(i=0;i<n2;++i)r[i] = a[mid+i];
	l[n1] = r[n2] = INT_MAX;
	i = j = 0;
	for(k=left;k<right;++k){
		cnt++;
		if(l[i]<=r[j]){
			a[k] = l[i];
			++i;
		}else{
			a[k] = r[j];
			++j;
		}
	}
	return cnt;
}

int mergeSort(int *a, int left, int right){
	int cnt = 0;
	if(left+1 < right){
		int mid = (left + right) / 2;
		cnt += mergeSort(a,left,mid);
		cnt += mergeSort(a,mid,right);
		cnt += merge(a,left,mid,right);
	}
	return cnt;
}
    
int main() {
	int n,*s, cnt;
	
	cin>>n;
	s = new int[n];
	for(int i=0;i<n;++i){
		cin>>s[i];
	}
	
	cnt = mergeSort(s,0,n);
	
	for(int i=0;i<n;++i){
		cout<<s[i]<<(i!=n-1?" ":"");
	}
	cout<<endl<<cnt<<endl;
	
	return 0;
}