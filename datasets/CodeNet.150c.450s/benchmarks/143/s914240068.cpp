#include<bits/stdc++.h>
using namespace std;

long long num[100000];

int main(){
	int n;
	long long sum =0;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		num[x-1]++;
		sum+=x;
	}
	int q;
	cin >> q;
	while(q--){
		int b,c;
		cin >> b >> c;
		num[c-1]+=num[b-1];
		sum -= (b*num[b-1]);
		sum += (c*num[b-1]);
		num[b-1]=0;
		cout << sum << '\n';
	}

}