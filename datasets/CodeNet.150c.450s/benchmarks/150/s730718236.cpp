#include<bits/stdc++.h>
using namespace std;
#define long long int lld
#define MAX 2000000
#define MAX_A 10000
int main(void){
	int num;
	cin >> num;
	int c[MAX_A], *a,*b;
	//配列の動的確保
	a = new int[num];
	b = new int[num];
	//全てを０で初期化
	memset(c,0,sizeof(c));

	for(int i = 0 ; i < num ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < num ; i++){
		c[a[i]]++;
	}
	for(int i = 1; i <= MAX_A; i++){
		c[i] = c[i] + c[i-1];
	}
	for(int i = num-1; i >= 0 ; i--){
		b[c[a[i]]] = a[i];
		c[a[i]]--;
	}
	for(int i = 1; i<=num ;i++){
		if(i-1) cout << " " ;
		cout << b[i];
	}
	cout << endl;
	return 0;
}