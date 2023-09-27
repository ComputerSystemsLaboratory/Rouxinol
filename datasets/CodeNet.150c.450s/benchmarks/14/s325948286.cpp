#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n , x;
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		x=i;
		if(i%3==0 && x%10!=3){
			cout << " " << i;
		} else if(x%10==3) { 
			cout << " " << i;
		} else {
			for(int j=0 ; j<(int(log10((double)n))) ; j++){
				x/=10;
				if(x){
					if(x%10==3){ 
						cout << " " << i;
						break;
					}
				}
			}
		}		
	}
	cout << endl;
	return 0;
}