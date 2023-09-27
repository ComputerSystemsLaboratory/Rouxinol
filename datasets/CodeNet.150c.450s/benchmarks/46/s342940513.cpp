#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int i=0;
    int n = 1, x = 1;
    cin >> n >> x;
    while ( n || x ){
        i=0;
        for (int j=2;j<n;j++){
            for (int k=1;k<j;k++) {
                for (int l=0;l<k;l++) {
                    if ( j+k+l+3 == x ) {
                        i++;
                    }
                }
            }
        }
        cout << i << endl;
        cin >> n >> x;
    }
}