#include <iostream>
using namespace std;

int main(){
        int n, m = 2, a[35] = {1, 1, 2};
        while(cin >> n && n){
                if(n > m){
                        for(int i = m+1; i <= n; i++){
                                    a[i] = a[i-3] + a[i-2] + a[i-1];
                        }
                        m = n;
                }
                cout << (a[n] + 3649) / 3650 << endl;
        }
        return 0;
}