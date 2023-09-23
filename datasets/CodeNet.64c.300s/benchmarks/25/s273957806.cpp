#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int a[4], b[4];
	while( cin >> a[0] ){
		rep(i,3) cin >> a[i+1];
		rep(i,4) cin >> b[i];
		int hit=0,blow=0;
		rep(i,4) if( a[i] == b[i] ) hit++;
		rep(i,4) rep(j,4) if(i!=j&&a[i]==b[j]) blow++;
		cout << hit << " " << blow << endl;
	}
	return 0;
}