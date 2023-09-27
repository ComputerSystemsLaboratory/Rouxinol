#include <cstdio>
#include <iostream>

using namespace std;


int main(){
	int n;
	int ans = 0;

	while(cin >> n){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int x=0;x<10;x++){
					for(int y=0;y<10;y++){
						if(i+j+x+y == n)ans++;
					}
				}
			}
		}
		printf("%d\n",ans);
		ans = 0;
	}

	return 0;
}