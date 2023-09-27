#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int n;
    int a[1001];
    int ans;

    while(true){
        cin >> n;
        if(n == 0) break;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int min = 1000000;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j){
                    ans = abs(a[i] - a[j]);
                    if(ans < min) min = ans;
                }
            }
        }
        cout << min << endl;
    }
}
