//$g++ main.cpp - compile
//$./a.out - run
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, x, t, cnt, k = 0, size = 1000;
    int ans[size];
    for(int i = 0; i < size; i++){
       ans[i] = 0; 
    }
    do{
        cin >> n >> x;
        cnt = 0;
        for(int i = n; i > 0; i--){
            t = x;
            if(t - i >= 3){
                t -= i;
                for(int j = i - 1; j > 0; j--){
                    if(t - j >= 1 && t - j < j){
                        cnt++;
                    }
                }
            }
        }
        ans[k++] = cnt;
    }while(n != 0 || x != 0);
    for(int i = 0; i < k - 1; i++){
        cout << ans[i] << endl;
    }
}