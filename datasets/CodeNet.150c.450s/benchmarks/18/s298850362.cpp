#include <cstdio>
#include <iostream>


using namespace std;


int main(){
	int n;
	int ans = 100000;

	while(cin >> n){
		for(int i=0;i<n;i++){
			ans = ans * 1.05;
			if(ans % 1000 > 0){
				ans = ((ans / 1000) + 1) * 1000;
			}
		}
		printf("%d\n",ans);

		ans = 100000;
	}

	return 0;
}