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
        int floor[35] = {0};
        floor[0] = 1;
        range(i, 1, n+1){
            if(i >= 1) floor[i] += floor[i - 1];
            if(i >= 2) floor[i] += floor[i - 2];
            if(i >= 3) floor[i] += floor[i - 3];
        }
        cout << floor[n] / 3650 + 1 << endl;
    }

}