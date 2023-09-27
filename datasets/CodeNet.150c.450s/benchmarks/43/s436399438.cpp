#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		int ret1=0,ret2=0;
		for(int i=0;i<n;i++){
			int a,b;
			cin >> a >> b;
			if(a > b) ret1+=a+b;
			if(a < b) ret2+=a+b;
			if(a == b) ret1+=a,ret2+=b;
		}
		cout << ret1 << " " << ret2 << endl;
	}
	return 0;
}