#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i <(n) ; ++i)
#define PI 3.14159265
#define pb push_back
#define pr pair<int,int>
using namespace std;
using ll = long long;
// using mod = 1000000000 + 7;
void self_max(int &a,int b){
	a = max(a,b);
}

void self_min(int &a,int b){
	a = min(a,b);
}
int main(){
	int a,b,c; cin >> a >>b >> c;

	if(a < b && b < c){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}

