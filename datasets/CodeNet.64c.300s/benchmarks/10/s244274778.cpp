#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	while(1){
		int x,y; cin >>x>>y;
		if(x ==0 && y==0)break;
		if(x>=y)cout << y << " "<<x << endl;
		else cout << x << " "<< y << endl;
	}
}
