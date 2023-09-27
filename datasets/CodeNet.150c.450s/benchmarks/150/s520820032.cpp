#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

int main(){
	int n;
	cin >> n;
	v1 a(n+1);
	v1 b(n+1);
	v1 c(10001, 0);
	for(int i = 1;i<n+1; i++){
		int x;
		cin >> x;
		a.at(i) = x;
		c.at(x)++;
	}
	for(int i=1; i <10001; i++){
		c.at(i) += c.at(i-1);
		if(c.at(i) == n) break;
	}
	for(int i = n; i >0; i--){

		b.at(c.at(a.at(i))) = a.at(i);
		c.at(a.at(i))--;
	}
	for(int i = 1;i<n+1; i++){
		cout << b.at(i);
		if(i == n){
			cout << endl;
		}else{
			cout << " ";
		}
	}
}

