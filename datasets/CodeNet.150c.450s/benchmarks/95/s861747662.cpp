#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        int left = 0, right = 0;
        int state = 0;
        int cnt=0;
        for(int i=0; i<n; i++){
            string f;
            cin >> f;
            if(f == "lu"){
                left = 1;
            }
            if(f == "ld"){
                left = 0;
            }
            if(f == "ru"){
                right = 1;
            }
            if(f == "rd"){
                right = 0;
            }
            if(state == 0 && left == 1 & right == 1){
                cnt++;
                state = 1;
            }
            if(state == 1 && left == 0 & right == 0){
                cnt++;
                state = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
