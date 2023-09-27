#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        int sum = 0, max = 0, small = 2 << 20;
        int point;
        rep(i,n){
            cin >> point;
            sum+= point;
            if(max < point) max = point;
            if(small > point) small = point;
        }
        cout << (sum - (max + small) ) / (n - 2) << endl;
    }
}