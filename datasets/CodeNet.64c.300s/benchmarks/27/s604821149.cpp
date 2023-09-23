#include <iostream>
using namespace std;

int main(){
	int n,x,c=0;
	while(cin >> n >> x,(n || x)){
		c=0;
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					if(i+j+k==x) c++;
				}
			}
		}
		cout << c << endl;
	}
		return 0;
}