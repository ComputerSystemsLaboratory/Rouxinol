#include <iostream>
#include <algorithm>
#include <math.h>
#define rep(i,o,u) for(int i = o;i <= u; i++)
using namespace std;
struct node{
	char name;
	int key;
};
int Partition(node a[],int p,int r){
	int i = p-1;
	for(int j = p;j <= r-1; j++){
		if(a[j].key <= a[r].key){
			i++;swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}
void Quicksort(node a[],int p,int r){
	if(p < r){
		int q = Partition(a,p,r);
		Quicksort(a,p,q-1);
		Quicksort(a,q+1,r);
	}
}
node L[100000],R[100000];
void merge(node a[],int left,int mid,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	rep(i,0,n1-1) L[i] = a[left+i];
	rep(i,0,n2-1) R[i] = a[mid+i];
	L[n1].key = R[n2].key = 2000000000;
	int i = 0,j = 0;
	rep(k,left,right-1){
		if(L[i].key <= R[j].key){
			a[k] = L[i++];
		}else{
			a[k] = R[j++];
		}
	}
}
void mergeSort(node a[],int left,int right){
	if(left + 1 < right){
		int mid = (left + right)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid,right);
		merge(a,left,mid,right);
	}
}
int main(){
	int n;
	struct node a[100001],b[100001];
	cin >> n;
	rep(i,0,n-1){ cin >> a[i].name >> a[i].key; b[i] = a[i]; }
	Quicksort(a,0,n-1);
	mergeSort(b,0,n);
	int i;
	for(i = 0;i <= n-1; i++){if(a[i].name != b[i].name) break;}
	if(i != n) cout << "Not stable" << endl;
	else cout << "Stable" << endl;
	rep(i,0,n-1) cout << a[i].name << " " << a[i].key << endl;
	return 0;
}