#include<iostream>
#include<climits>
#include<vector>
#define INFTY 2000000000
using namespace std;

int cnt;

void merge(std::vector<int>& v, int left,int mid, int right){
	int n1 = mid - left, n2 = right - mid;
	std::vector<int> L,R;
	for(int i=0;i<n1;i++){
		L.push_back(v[left+i]);
	}
	for(int i=0;i<n2;i++){
		R.push_back(v[mid+i]);
	}
	L.push_back(INFTY);
	R.push_back(INFTY);
	int i=0,j=0;
	for(int k=left; k<right;k++){
		cnt++;
		if(L[i] <= R[j]){
			v[k] = L[i];
			i++;
		} else {
			v[k] = R[j];
			j++;
		}
	}
}

void mergeSort(std::vector<int>& v, int left, int right){
	if(left+1 < right){
		int mid = (left+right)/2;
		mergeSort(v,left,mid);
		mergeSort(v,mid,right);
		merge(v,left,mid,right);
	}
}

int main(){
	int n,in;
	std::vector<int> v;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> in;
		v.push_back(in);
	}
	mergeSort(v,0,n);

	for(int i=0;i<n;i++){
		if(i>0) cout <<" ";
		cout << v[i];
	}
	cout << endl;
	cout << cnt << endl;
	return 0;
}