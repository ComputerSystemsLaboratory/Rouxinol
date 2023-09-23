#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;

    int max_r = -1;
    int min_r = 1000000001;
    int max_d = -1000000001;

    int r_init;
    cin >> r_init;
    min_r = r_init;

    for (int i=0; i<n-1; i++){
        int r, d;
        cin >> r; 
        if(r <= min_r){
            max_r = r;
            d = r - min_r;
            if (d > max_d) {
                max_d = d;
            }
            min_r = r;
        } else if (r > max_r) {
            max_r = r;
            d = max_r - min_r;
            if (d > max_d) {
                max_d = d;
            }
        }
    }
    cout << max_d << endl;
}
