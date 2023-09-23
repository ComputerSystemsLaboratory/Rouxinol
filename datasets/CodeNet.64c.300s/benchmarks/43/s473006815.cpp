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
    int a = 0, b = 0;
    rep(i,8){
        int inp;
        cin >> inp;
        if(i < 4){
            a += inp;
        }else{
            b += inp;
        }
    }
    cout << max(a,b) << endl;
}