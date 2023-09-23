#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	while(scanf("%d",&n)!=EOF){
		int ans=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
					int l=n-i-j-k;
					if(0<=l&&l<=9)ans++;
				}
				
			}
		}
	cout << ans << endl;
	}

	
	
    	// your code goes here
	return 0;
}