#include <iostream>
#include <algorithm>

typedef long long ll;

const int N = 100001;

int n = 1;
ll dat[N * 4];

void init(int _n){
	while(n < _n)n *= 2;
	for(int i = 0; i < 2 * n - 1; ++i)dat[i] = 0;
}

void update(int k, ll x){
	k += n - 1;
	dat[k] += x;
	while(k > 0){
		k = (k - 1) / 2;
		dat[k] += x;
	}
}

ll rec(int a, int b, int k, int l, int r){
	if(b <= l || r <= a)return 0;
	if(a <= l && r <= b)return dat[k];
	else return (rec(a, b, 2 * k + 1, l, (l + r) / 2) + rec(a, b, 2 * k + 2, (l + r) / 2, r));
}

ll query(int a, int b){
	return rec(a, b, 0, 0, n);
}

int main(){
	int _n, q;
	std::cin >> _n >> q;
	
	init(_n);
	
	for(int i = 0; i < q; ++i){
		int c, x, y;
		std::cin >> c >> x >> y;
		
		if(c == 0)update(x - 1, y);
		else std::cout << query(x - 1, y) << std::endl;
	}

	return 0;
}