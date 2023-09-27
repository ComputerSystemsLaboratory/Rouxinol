#include <iostream>
#define rep(i,o,u) for(int i = o;i < u; i++)
using namespace std;
int L[500000/2+2],R[500000/2+2];
int ans = 0;
void merge(int a[],int left,int mid,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	rep(i,0,n1) L[i] = a[left + i];
	rep(i,0,n2) R[i] = a[mid + i];
	L[n1] = R[n2] = 2000000000;
	int i = 0,j = 0;
	rep(k,left,right){
		ans++;
		if(L[i] <= R[j]){
			a[k] = L[i++];
		}else{
			a[k] = R[j++];
		}
	}
}
void mergeSort(int a[],int left,int right){
	if(left + 1 < right){
		int mid = (left + right) / 2;
		mergeSort(a,left,mid);
		mergeSort(a,mid,right);
		merge(a,left,mid,right);
	}
}
int main(){
	int n;
	cin >> n;
	int a[500001];
	rep(i,0,n) cin >> a[i];
	mergeSort(a,0,n);
	rep(i,0,n-1){cout << a[i] << " ";}
	cout << a[n-1] << endl;
	cout << ans << endl;
	return 0;
}