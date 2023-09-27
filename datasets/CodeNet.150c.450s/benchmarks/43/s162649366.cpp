#include <iostream>
using namespace std;

int main(){
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		
		int a=0, b=0;
		for(int i=0; i<n; i++){
			int n,m;
			cin >> n >> m;
			if(n>m) a += n+m;
			if(n<m) b += n+m;
			if(n==m){
				a += n;
				b += m;
			}
		}
		cout << a << " " << b << endl;
	}
    return 0;
}