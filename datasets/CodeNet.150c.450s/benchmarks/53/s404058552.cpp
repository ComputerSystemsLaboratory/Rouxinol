#include<bits/stdc++.h>
using namespace std;

void f(int n, vector<int> &v){
	if(n==1) return;
	for(int i=2; i<=n; i++){
		if(n%i==0) {
			v.push_back(i);
			f(n/i,v);
			break;
		}
	}
	
}

bool hantei(long x){
	
	int i=2;
	while(1){
		if (x==1) return 0;
		if (i==x) return 1;
		if (x % i == 0) return 0;
		else {
			if(x < i*i) return 1;
			else i++;
		}
	}
}

int main() {
	vector<int> v;
	int n;
	cin >> n;
	if(!hantei(n))f(n,v);
	else v.push_back(n);
	cout << n << ':';
	for(auto i:v) cout << ' ' << i; 
	cout << endl;
}

