#include <iostream>
#include <cstring>
using namespace std;

int main(){
    long long int n, ans, sum;
    long long int a[5001];
    
    while(cin >> n){
        if(n == 0){
            break;
        }
        
        memset(a, 0, sizeof(a));
        
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        
        ans = a[0];
            
        for(int i = 0;i < n;i++){
            sum = 0;
                
            for(int j = i;j < n;j++){
                sum += a[j];
                ans = max(sum, ans);
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}