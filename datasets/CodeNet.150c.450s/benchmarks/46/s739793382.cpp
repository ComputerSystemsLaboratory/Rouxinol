#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int c=0,n,x;
	while(cin >> n >> x){
		if(n==0&&x==0) break;
		for(int i=1;i<=n-2;i++){
			int a1=i;
			for(int j=i+1;j<=n-1;j++){
				int a2=j;
				for(int k=j+1;k<=n;k++){
					int a3=k;
					if(a1+a2+a3==x){
						c++;
					}  
				}
			}
		}
		cout<< c <<endl;
		c=0;
	}
	

	return 0;
}