#include <iostream>
using namespace std;
int main(){
    int n, x, c;
    while(true){
		cin >> n >> x;
		if ((n | x) == 0)
			break;
        c = 0;
		for(int i=1;i<n-1;++i){
			for(int j=2;j<n;++j){
				for(int k=3;k<n+1;++k){
					if(i<j&&j<k&&i+j+k==x)
						c++;
				}
			}
		}
		cout<<c<<endl;
    }
    return 0;
}

