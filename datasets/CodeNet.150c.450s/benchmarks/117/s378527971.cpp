#include<iostream>
#include<vector>
using namespace std;

int cnt=0;

void merge(int n,int a[],int f,int m,int c){
	int n1=m-f+1;
	int n2=c-m;
	vector<int> L;
	vector<int> R;
	int i,j;
	for(i=0;i<n1;i++){L.push_back(a[f+i]);}
	for(i=0;i<n2;i++){R.push_back(a[m+i+1]);}
	L.push_back(1<<30);
	R.push_back(1<<30);
	i=j=0;
	for(int k=f;k<=c;k++){
		if(L[i]<R[j]){
			a[k]=L[i++];
		}else{
			a[k]=R[j++];
		}
		cnt++;
	}
}

void mergeSort(int n, int a[], int i, int j){
	if(i<j){
		int mid=i+(j-i)/2;
		mergeSort(n,a,i,mid);
		mergeSort(n,a,mid+1,j);
		merge(n,a,i,mid,j);
	}
}

void mergeSort(int n, int a[]){
	mergeSort(n,a,0,n-1);
}

int main(){

	int n, a[500000];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	mergeSort(n,a);
	cout << a[0];
	for(int i=1;i<n;i++){
		cout << " " << a[i];
	}
	cout << endl;
	cout << cnt << endl;
	return 0;
}

