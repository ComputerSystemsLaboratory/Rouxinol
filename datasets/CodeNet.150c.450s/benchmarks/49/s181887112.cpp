#include <iostream>
using namespace std;

int main() {

    while(true){

        int n;

        cin >> n;

        if(n == 0){
            break;
        }

        int ma=-1,mi=1001,sums=0;

        for(int i=0; i<n; i++){
            int input;
            cin >> input;
            sums += input;
            if(ma < input){
                ma = input;
            }
            if(mi > input){
                mi = input;
            }
        }

        sums -= ma + mi;
        cout << sums/ (n-2) << endl;

    }

    return 0;
}
