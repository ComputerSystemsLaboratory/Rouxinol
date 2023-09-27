#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

#define max 1000000
int main(){
    bool prime[max] = {1,1,0};
    range(i,2,max){
            if(!prime[i]){
                for(int j = i + i; j <= max; j += i){
                    prime[j] = 1;
                }
            }
    }
    int a, b, n;
    while(cin >> a >> b >> n, a||b||n){
        rep(i,max){
            if(prime[a + b * i] == 0){
                n--;
            }
            if(!n){
                cout << a + b * i << endl;
                break;
            }
        }
    }
}