#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        bool prime[1000000] = {false};
        prime[1] = true;
        prime[2] = false;
        int count = 0;
      
        for(int j = 2; j * j <= n ; j++){
            if(!prime[j]){
                for (int k = 2; k*j <= n;k++){
                   prime[j*k] = true;
                }
            }
        }
        for(int i = 1;i<=n;i++){
            if(!prime[i]) count = count +1;
        }
        cout << count << endl;
    }
    return 0;
}