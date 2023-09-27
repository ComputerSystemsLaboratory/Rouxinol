#include <iostream>
using namespace std;
int main(void){
        int n = 0;
    cin >> n;
    for (int i=1; i<= n; i++){
        if(i%3==0 || i%10 == 3 || ((i/10) == 3)) {
            cout << ' ' << i;
        } else {
            int x = i;
            while (x >= 10) {
                x/=10;
                if (x%10==3) {
                    cout << ' ' << i;
                    break;
                }
            }
        }
    }
    cout <<  endl;
}