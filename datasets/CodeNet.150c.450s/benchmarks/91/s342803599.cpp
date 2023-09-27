#include <iostream>
#include <cmath>
using namespace std;
#define MAX 1000000

int main(){
	bool p[MAX+1];
	int n, ans;

	for(int i=0 ; i<=MAX ; i++){
		p[i] = (i<=1)? false : true ;
	}

	for(int i=2 ; i<=sqrt(MAX)+1 ; i++){
		if(p[i]){
			for(int j=i*2 ; j<=MAX ; j+=i){
				p[j] = false;
			}
		}
	}

	while( cin >> n ){		
		ans = 0;
		for(int i=0 ; i<=n ; i++){
			if(p[i]){
				ans++;
			}
		}
		cout << ans << endl;
	}
}