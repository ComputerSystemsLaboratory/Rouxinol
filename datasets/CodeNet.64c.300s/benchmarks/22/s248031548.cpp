#include<algorithm>
#include<iostream>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
int main(){
	int N, a, b, c;
	cin >> N;
	rep(i,N){
		cin >> a >> b >> c;
		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

    return 0;
}