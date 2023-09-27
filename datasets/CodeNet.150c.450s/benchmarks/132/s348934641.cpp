#include <iostream>
using namespace std;

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)

int a[50];
int n, p;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	while(cin>>n>>p,n|p) {
		rep(i, n)a[i]=0;
		int s=p;
		int i=0;
		while(1) {
			if(s==0) {
				s = a[i];
				a[i] = 0;
			}else {
				s--;
				a[i]++;
				if(s==0 && a[i]==p)break;
			}
			i = (i+1)%n;
		}
		cout<<i<<endl;
	}
	
	return 0;
}