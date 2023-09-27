#include <bits/stdc++.h>
using namespace std;

int p[60], c[60];

int main(){
    int n, r;
    while(cin >> n >> r && (n | r)){
        for(int i=0;i<r;i++)
            cin >> p[i] >> c[i];
        
        int target = 1;
        for(int i=r-1;i>=0;i--){
            int t = p[i] - 1 + c[i];
            
            if(target > t)
                continue;
        
            if(target <= c[i]){
                target = p[i] - 1 + target;
            } else {
                target = target - c[i];
            }
        }
        
        cout << n + 1 - target << endl;
    }
    
    return 0;
}