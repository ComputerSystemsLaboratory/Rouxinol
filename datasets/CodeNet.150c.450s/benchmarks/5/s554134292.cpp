#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n;
    int a[n+1];
    for(k=1;k<=n;k++){
        cin >> a[k];
    }
    for(k=n;k>0;k--){
        cout << a[k];
        if(k != 1)
            cout << " ";
    }
        cout << endl;
	return 0;
}