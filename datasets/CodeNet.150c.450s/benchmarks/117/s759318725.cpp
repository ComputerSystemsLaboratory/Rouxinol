#include<iostream>
#include<vector>
using namespace std;

int cnt=0;

void merge(int a[],int l,int m,int r){
	int n1=m-l;
	int n2=r-m;
	vector<int> L;
	vector<int> R;
	int i,j;
	for(i=0;i<n1;i++){L.push_back(a[l+i]);}
	for(i=0;i<n2;i++){R.push_back(a[m+i]);}
	L.push_back(1<<30);
	R.push_back(1<<30);
	i=j=0;
	for(int k=l;k<r;k++){
		if(L[i]<=R[j]){
			a[k]=L[i++];
		}else{
			a[k]=R[j++];
		}
		cnt++;
	}
}

void mergeSort(int a[], int l, int r){
	if(l+1<r){
		int mid=l+(r-l)/2;
		mergeSort(a,l,mid);
		mergeSort(a,mid,r);
		merge(a,l,mid,r);
	}
}

int main(){
	int n, a[500000];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	mergeSort(a,0,n);
	cout << a[0];
	for(int i=1;i<n;i++){
		cout << " " << a[i];
	}
	cout << endl;
	cout << cnt << endl;
	return 0;
}

