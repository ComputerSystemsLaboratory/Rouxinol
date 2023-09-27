#include <iostream>
using namespace std;

int main(){
    int n, k, a[100000];
    while( true ){
        cin >> n >> k;
        if( n == 0 && k == 0 ) break;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int s = 0, max;
        for(int i = 0; i < k; i++){
            s += a[i];
        }
        max = s;
        for(int i = k; i < n; i++){
            s += ( -a[i-k] + a[i]);
            if( s > max ) max = s;
        }
        cout << max << endl;
    }
    return 0;
}