//compiledef
#include <bits/stdc++.h>
#define rep(i, n) for(i=0;i<(n);i++)
#define per(i, n) for(i=(n);i>0;i--)
#define repx(i, n, x) for(i=(x);i<(n);i++)
#define xper(i, n, x) for(i=(n);i>(x);i--)
#define pback push_back

//c++def
using namespace std;
typedef long long int ll;
const ll MOD = 1e9+7;
const ll MOD2 = 998244353;
int n;
struct par{
	char f;
	int s;
};

par a[100001];
par b[100001];
void merge(int left, int mid, int right){
	int i;
	int j;
	int k;
	int n1=mid-left;
	int n2=right-mid;
	par L[50002];
	par R[50002];
	rep(i, n1) L[i]=a[left+i];
	rep(i, n2) R[i] = a[mid+i];
	L[n1].s = 2e9;
	R[n2].s = 2e9;
	for(i=0, j=0, k=left;k<right;k++){
		if(L[i].s<=R[j].s){
			a[k] = L[i];
			i++;
		}else{
			a[k] = R[j];
			j++;
		}
	}
}
void mergesort(int left, int right){
	if(left+1<right){
		int mid = (left+right)/2;
		mergesort(left, mid);//bunkatsu(recursion)
		mergesort(mid, right);
		merge(left, mid, right);
	}
}
int partition(int p, int r){
	int i = p-1;
	int j;
	for(j=p;j<r;j++){
		if(b[j].s<=b[r].s){
			i++;
			swap(b[i], b[j]);
		}
	}
	swap(b[i+1], b[r]);
	return i+1;
}
void quicksort(int p, int r){
	if(p<r){
		int q = partition(p, r);
		quicksort(p, q-1);
		quicksort(q+1, r);
	}
}
int main(){
	int i;
	cin >> n;
	bool stable = true;
	rep(i, n){
		cin >> a[i].f >> a[i].s;
		b[i] = a[i];
	}
	mergesort(0, n);
	quicksort(0, n-1);
	rep(i, n){
		if(a[i].f!=b[i].f){
			stable = false;
			break;

		}
	}

	if(stable)printf("Stable\n");
	else printf("Not stable\n");
	rep(i, n) printf("%c %d\n", b[i].f, b[i].s);
}

