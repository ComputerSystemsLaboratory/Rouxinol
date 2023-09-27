#include <iostream>
using namespace std;

int n;
long long int dat[300000];

void init(int nn){
	n = 1;
	while(n < nn) n *= 2;
	for(int i = 0;i < n * 2 - 1;i++){
		dat[i] = 0ll;
	}
}

void add(int x,int i){
	x += n - 1;
	dat[x] += i;
	while(x){
		x = (x - 1) / 2;
		dat[x] = dat[x * 2 + 1] + dat[x * 2 + 2];
	}
}

long long int sum(int s,int t,int k,int l,int r){
	if(t <= l || r <= s) return 0;
	if(s <= l && r <= t) return dat[k];
	return sum(s,t,k * 2 + 1,l,(l + r) / 2) + sum(s,t,k * 2 + 2,(l + r) / 2,r);
}

int main(){
	int q;
	cin >> n >> q;
	init(n);
	for(int i = 0;i < q;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(a == 0){
			add(b - 1,c);
		}else{
			cout << sum(b - 1,c,0,0,n) << endl;
		}
	}
	return 0;
}