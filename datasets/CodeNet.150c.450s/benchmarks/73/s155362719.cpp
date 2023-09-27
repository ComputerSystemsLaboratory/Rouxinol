#include <iostream>
using namespace std;

int bit[100001] = {},n;

int sum(int i){
	int s = 0;
	while(i > 0){
		s += bit[i];
		i -= i & -i;
	}
	return s;
}

void add(int i,int x){
	while(i <= n){
		bit[i] += x;
		i += i & -i;
	}
}

int main(){
	int q;
	cin >> n >> q;
	for(int i = 0;i < q;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(a == 0){
			add(b,c);
		}else{
			cout << sum(c) - sum(b - 1) << endl;
		}
	}
	return 0;
}