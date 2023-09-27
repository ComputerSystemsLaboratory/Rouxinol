#include <iostream>

using namespace std;

int main() {
    int n, r;
    while(cin >> n >> r && n*r != 0){
        int lst[n];
        for(int i=0; i<n; i++) {
            lst[i] = n-i;
        }
        for(int x=0; x<r; x++){
            int p, c;
            cin >> p >> c;
            if(p == 1) {
            }
            else {
                int sub[c];
                for(int j=0; j<c; j++) {
                    sub[j] = lst[p-1+j];
                }
                for(int k=p-2; k>=0; k--) {
                        lst[k+c] = lst[k];
                }
                for(int i=0; i<c; i++) {
                    lst[i] = sub[i];
                }
            }
        }
        cout << lst[0] << endl;
    }
}