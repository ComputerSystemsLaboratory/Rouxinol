#include <iostream>
using namespace std;

int main(){
    int n;
    int count[30];
    while(cin >> n, n){
        for(int i = 0;i < n;++i){
            count[i] = i < 3 ? 1 : 0;
        }
        for(int i = 0;i < n;++i){
            for(int j = 1;j < 4;++j){
                if(i + j >= n) break;
                count[i + j] += count[i];
            }
        }
        cout << count[n - 1] / 3650 + 1 << endl;
    }
}