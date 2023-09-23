#include <iostream>

using namespace std;

int main(void){
    while(1){
        int n; cin >> n;
        if(n == 0) break;

        int res = 0;
        for(int i = 1; i < n; i++){
            int sum = i;

            for(int j = i + 1; j < n; j++){
                sum += j;
                if(sum == n){
                    res++;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}