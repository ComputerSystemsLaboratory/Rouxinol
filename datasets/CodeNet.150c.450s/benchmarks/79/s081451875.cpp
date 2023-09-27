#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define dump(x) cout << #x << " = " << x << endl

using namespace std;

int card[50];
int n, r;

void disp(){
	rep(i,0,n) cout << card[i] << " ";
	cout << endl;
	return ;
}

int main(){

	while(1){
		cin >> n >> r;
		if(n==0) break;

		rep(i,0,n) card[i] = n - i;
		// disp();

		rep(i,0,r){
			int p, c;
			cin >> p >> c;
			int temp[p];

			rep(i,0,p-1) temp[i] = card[i];
			rep(i,0,c) card[i] = card[p-1+i];
			rep(i,0,p-1) card[c+i] = temp[i];

			// disp();

		}

		cout << card[0] << endl;

	}
	return 0;
}