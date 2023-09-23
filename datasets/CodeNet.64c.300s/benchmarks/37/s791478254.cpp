#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        int ret=0;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                if(n%i != 0 && n*2%i ==0 && (double)n/i-i/2>0) ret++;
            }else{
                if(n%i == 0 && n/i - i/2 > 0) ret++;
            }
        }
        cout << ret << endl;
    }
}