#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    int n, x;
    
    while(cin >> n >> x){
        int count = 0;
        if(n == 0 && x == 0) return 0;
        for(int i=1; i<=n; i++){
            for(int j=2; j<=n; j++){
                for(int k=3; k<=n; k++){
                    if(i == j || j == k || i == k || i > j || j > k || i > k){
                        continue;
                    }
                    if(x == i + j + k){
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}

