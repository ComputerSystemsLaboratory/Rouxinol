#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <iomanip>
using namespace std;
int n, k;
int main(){
    while(cin >> n, n){
        int res=0;
        int rest=1000-n;
        while(rest){
            if(rest-500>=0){
                res++;
                rest-=500;
                continue;
            }
            if(rest-100>=0){
                res++;
                rest -=100;
                continue;
            }
            if(rest-50>=0){
                res++;
                rest -=50;
                continue;
            }
            if(rest-10>=0){
                res++;
                rest -=10;
                continue;
            }
            if(rest-5>=0){
                res++;
                rest -=5;
                continue;
            }
            if(rest-1>=0){
                res++;
                rest -=1;
                continue;
            }
        }
        cout << res << endl;
    }
    return 0;
}
