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
int near(char t, int i){
	if(t == 'p') return floor(i/2);
	if(t == 'l') return i*2;
	if(t == 'r') return i*2+1;
	return 0;
}
void max_heapify(int *a,int i){
	int largest;
	int l = near('l', i);
	int r = near('r', i);
	if(l <= n && a[l] > a[i])
		largest = l;
	else
		largest = i;
#ifdef DBG
	cout << l << r << largest <<endl;
#endif
	if(r <= n && a[r] > a[largest]) largest = r;
	if(largest != i){
		swap(a[i], a[largest]);
		max_heapify(a, largest);
	}
}
int main(){
	int a[530000];
	int i;
	int tmp;
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> a[i];
	}
	for(i=n/2; i >0 ;i--) max_heapify(a, i);
	for(i=1;i<=n;i++){
		printf(" %d", a[i]);
	}
	cout <<endl;

}

