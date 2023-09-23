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
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        int plus[5002] = {0}, max = -100001, input;
        range(i,1,n+1){
            cin >> input;
            plus[i]+= input;
            plus[i+1] = plus[i];
        }
        rep(i,n+1){
            rep(j,i){
                if(max < plus[i] - plus[j]){
                    max = plus[i] - plus[j];
                }
            }
        }
        cout << max << endl;
    }
}