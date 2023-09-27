#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    for(int i=1; i<=n; i++){
        x = i;
        if(x%3==0) cout << ' ' << i << flush;
        else{
	    while(x>0){
	        if(x%10==3){
		    cout << ' ' << i << flush;
		    break;
		}
		x /= 10;
	    }
	}
	if(i==n) cout << endl;
    }
}