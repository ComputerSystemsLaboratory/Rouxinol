#include <bits/stdc++.h>
using namespace std;
/*
int pow(int a,int b){
    int R=1;
    while(b){
        if(b&1) R=(R*a);
        a=(a*a);
        b>>=1;
    }
    return R;
}
*/
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int e;
	while(cin >> e , e){
		int m=1e+9;
		/*
		for(int z=0 , z1=0 ; z<=e; ++z1 , z=z1*z1*z1){
			for(int y=0 , y1=0 ; y<=e; ++y1 , y=y1*y1){
				int x=e-y-z;
				if(x>=0) m = min(m , x+(int)sqrt(y)+(int)cbrt(z));
			}
		}
		*/
		for(int z=0 ; z*z*z<=e ; ++z){
			for(int y=0 ; y*y<=e ; ++y){
				int x=e-z*z*z-y*y;
				if(x>=0) m = min(m , x+y+z);
			}
		}
		cout << m << endl;
	}
	return 0;
}