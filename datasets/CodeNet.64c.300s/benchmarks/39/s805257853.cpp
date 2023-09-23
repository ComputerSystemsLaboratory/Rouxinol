#include <iostream>
using namespace std;


int main () {

	int a;
	int ans;
	while (cin>>a && a) {
		ans=0;
		if(a<=36){
			for(int i=0;i<10;i++){
				for(int j=0;j<10;j++){
					for(int k=0;k<10;k++){
						for(int l=0;l<10;l++){
							if((i+j+k+l)==a)
								ans++;
						}
					}
				}
			}
				
		}
		cout << ans <<endl;
	}
    return 0;
}