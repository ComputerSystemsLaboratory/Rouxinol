#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void){
    
    int n;
    cin >> n;
    
    vector<int> ans(n+1);
    for (int x = 1; x <= 100; x++){
        for (int y = 1; y <= 100; y++){
            for (int z = 1; z <= 100; z++){
                int temp_sum = x*x + y*y + z*z;
                temp_sum += x*y + y*z + z*x;
                
                if (temp_sum <=n) ans[temp_sum]++;
            }
        }
    }
    
    for (int i = 1; i <= n; i++) cout << ans[i] << endl;
    return 0;
}
