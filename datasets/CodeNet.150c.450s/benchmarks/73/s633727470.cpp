#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;
static const int INF = 2147483647;
static const int MAX_N = 1 << 18;

int n, dat[2 * MAX_N - 1];

void init(int n_){
	n = 1;
	while(n < n_) n *= 2;

	for(int i = 0; i < 2 * n - 1; i++) dat[i] = 0;
}

void update(int k, int a){
	k += n - 1;
	dat[k] += a;
	while(k > 0){
		k = (k - 1) / 2;
		dat[k] += a;
	}
}

int query(int a, int b, int k, int l, int r){
	if(r <= a || b <= l) return 0;

	if(a <= l && r <= b) return dat[k];
	else{
		int vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
		int vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
		return vl + vr;
	}
}

int main(){
	int n_, q;
	scanf("%d %d", &n_, &q);
	init(n_);
	for(int i = 0; i < q; i++){
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);
		if(com == 0) update(x - 1, y);
		if(com == 1) printf("%d\n", query(x - 1, y, 0, 0, n));
		//for(int i = 0; i < 2 * n - 1; i++){
		//	printf("%d", dat[i]);
		//	if(i == 2 * n - 2) printf("\n");
		//	else printf(" ");
		//}
	}
	return 0;
}