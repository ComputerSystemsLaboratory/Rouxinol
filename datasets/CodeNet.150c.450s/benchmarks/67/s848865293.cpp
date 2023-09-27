#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n,n){
        int ret=0;
        
        for(int i=2;i<=n;i++){
            for(int j=i;j<=n;j++){
                int sum=0;
                for(int k=0;k<i;k++){
                    sum += j-k;
                }
                if(sum == n) ret++;
            }
        }
        cout << ret << endl;
    }
}