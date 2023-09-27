#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	int W,H,x,y,r; cin >>W >>H >> x >>y >>r;
	if(x-r>=0 && x+r<=W && y-r>=0 && y+r<=H){cout << "Yes"<< endl;}
	else cout << "No"<< endl;
}
