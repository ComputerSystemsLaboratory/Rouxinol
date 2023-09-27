#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    while(cin >> n, n){
        int l = 0, r = 0;
        int ans = 0;
        int c = 0;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            if(s == "lu"){
                l++;
            }
            if(s == "ru"){
                r++;
            }
            if(s == "ld"){
                l--;
            }
            if(s == "rd"){
                r--;
            }
            if(l == r && c != l){
                c = 1 - c;
                ans++;
            }
        }
        cout << ans << endl;
    }
}

