#include <iostream>

using namespace std;

constexpr int maxs = 2000000000;

int n,a[500000],b[2][500001],cnt;

void merge(int left,int mid ,int right){
	int n1 = mid -left;
	int n2 = right - mid;
	for(int i = 0;i < n1;i++) b[0][i] = a[left+i];
	for(int i = 0;i < n2;i++) b[1][i] = a[mid+i];
	b[0][n1] = b[1][n2] = maxs;
	int p[2] = {0,0};
	while(p[0] != n1 || p[1] != n2) {
		cnt++;
		if(b[0][p[0]] <= b[1][p[1]]) {
			a[left+p[0]+p[1]] = b[0][p[0]];
			p[0]++;
		} else {
			a[left+p[0]+p[1]] = b[1][p[1]];
			p[1]++;
		}
	}
}

void mergeSort(int left,int right) {
	if(left+1<right) {
		int mid = (left+right)/2;
		mergeSort(left,mid);
		mergeSort(mid,right);
		merge(left,mid,right);
	}
}

int main() {
	cin >> n;
	for(int i = 0;i < n;i++) cin >> a[i];
	mergeSort(0,n);
	for(int i = 0;i < n-1;i++)cout << a[i] << " ";
	cout << a[n-1] << endl << cnt << endl;
}

