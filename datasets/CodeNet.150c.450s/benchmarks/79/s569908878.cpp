#include <iostream>
using namespace std;

int m[4][4];

int main(){
	int i,j;
	int n,r,p,c;
	int f[51],buf[51];
	while(cin >> n >> r,(n||r)){
		for(i=1;i<=n;i++){
			f[i]=-i+n+1;
		}
		while(r--){
			cin >> p >> c;
			for(i=1;i<p;i++) buf[i]=f[i];	//buf
			for(i=1;i<=c;i++) f[i]=f[i+p-1];
			for(i=1;i<p;i++) f[i+c]=buf[i];
		}
		cout << f[1] << endl;
	}
	return 0;
}