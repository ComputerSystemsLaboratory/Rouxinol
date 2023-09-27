#include <iostream>
using namespace std;

int main() {

    while(true){

        int n,r;
        cin >> n >> r;

        if(n == 0){
            break;
        }

        int a[n];
        for(int i=0; i<n; i++){
            a[i] = n-i;
        }

        for(int loop=0; loop<r; loop++){

            int p,c;

            cin >> p >> c;

            int tmp[n];

            for(int i=0; i<n; i++){
                tmp[i] = a[i];
            }

            int count = 0;

            for(int i=0; i<c; i++){
                a[count] = tmp[i+p-1];
                count++;
            }
            for(int i=0; i<p-1; i++){
                a[count] = tmp[i];
                count++;
            }

        }

        cout << a[0] << endl;

    }

    return 0;
}
