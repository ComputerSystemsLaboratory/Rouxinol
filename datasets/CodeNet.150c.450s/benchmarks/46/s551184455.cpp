#include <iostream>
using namespace std;

int main(){
	int n, x;
	for(int i=0;;i++){
		cin >> n >> x;
		int c=0;
		if(n==0&&x==0){
			break;
		}else{
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
					for(int l=1;l<=n;l++){
						if(j+k+l==x){
							c++;
							if(j==k||k==l||l==j){
								c--;
							}
						}
					}
				}
			}
		}
		c=c/6;
		cout << c << endl;
	}
}