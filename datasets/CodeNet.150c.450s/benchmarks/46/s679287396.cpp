#include <iostream>
using namespace std;
int main() {
    int n, x;
    while(true){
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        int count = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                for(int k = 1; k <= n; k++){
                    if(i + j + k == x){
                        if(i == j || i == k || j == k){
                            continue;
                        }
                        else{
                            count++;
                        }
                    }
                }
            }
        }
        cout << count/6 << endl;
    }
    return 0;
}


